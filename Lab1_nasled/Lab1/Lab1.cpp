#include <iostream>
#include <stdlib.h>
#include <string>

enum HozD {Hunting, Fishing, Harvesting, Logging, Camping, Kayaking, Hiking};
enum Status {Critical, Danger, Stable, Good};

struct Director
{
    std::string fio;
    int passport;
    std::string addr;
    Director(std::string a, int b, std::string c) :fio(a), passport(b), addr(c) {};
};
struct Time
{
    int d;
    int m;
    int y;
    Time() :d(0), m(0), y(0) {};
    Time(int a, int b, int c) :d(a), m(b), y(c) {};
    void Print();
};
void Time::Print()
{
    std::cout << d << ":" << m << ":" << y;
}
struct PermitZone
{
    HozD todo;
    Time start;
    Time end;
    double square;
    PermitZone() :todo(Hiking), start(Time()), end(Time()), square(0) {};
    PermitZone(HozD a, Time s, Time e, double sq) : todo(a), start(s), end(e), square(sq) {};
};
struct DefObj
{
    std::string name;
    int count;
    Status s;
    DefObj() : name(""), count(0), s(Critical) {};
    DefObj(std::string a, int b, Status st) :name(a), count(b), s(st) {};
};
class DefZone
{
private:
    int n;
    int law;
    std::string name;
    double square;
public:
    DefZone(int a, int b, std::string n, double s) :n(a), law(b), name(n), square(s) {};
    virtual void Print();
};
void DefZone::Print()
{
    std::cout << "No: " << n << std::endl;
    std::cout << "Law: " << law << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Square: " << square << std::endl;
}
class Zapoved : public DefZone
{
private:
    int x = 0;
    DefObj object[10];
    Director dir;
public:
    Zapoved(int a, int b, std::string n, double s, DefObj def, Director d) : DefZone(a, b, n, s), dir(d) { object[0] = def; x++; };
    void AddDef();
    virtual void Print();
};
void Zapoved::AddDef()
{
    DefObj obj;
    std::cout << "Name:";
    std::cin >> obj.name;
    std::cout << "Count:";
    std::cin >> obj.count;
    if (obj.count <= 20)
    {
        obj.s = Critical;
    }
    else if (obj.count <= 100)
    {
        obj.s = Danger;
    }
    else if (obj.count <= 1000)
    {
        obj.s = Stable;
    }
    else if (obj.count >= 5000)
    {
        obj.s = Good;
    }
    object[x] = obj;
    if (x < 10)
    {
        x++;
    }
    else
    {
        x = 0;
    }
}
void Zapoved::Print()
{
    DefZone::Print();
    std::cout << "Director zapovednika: " << dir.fio << std::endl;
    for (int i = 0; i < x; i++)
    {
        std::cout << "Object " << i << ": " << object[i].name << ", count=" << object[i].count << ", status=" << object[i].s << std::endl;
    }
}
class NPark : public Zapoved
{
private:
    int x = 0;
    PermitZone zone[10];
public:    
    NPark(int a, int b, std::string n, double s, DefObj def, Director d, PermitZone z) : Zapoved(a, b, n, s, def, d) { zone[0] = z; };
    void Print();
    void AddZone(PermitZone);
};
void NPark::AddZone(PermitZone z)
{
    zone[x] = z;
    if (x < 10)
    {
        x++;
    }
    else
    {
        x = 0;
    }
}
void NPark::Print()
{
    Zapoved::Print();
    for (int i = 0; i < x; i++)
    {
        std::cout << "Zone " << i << ": " << " Razreshennaya deyatelnost = " << zone[i].todo << ", square=" << zone[i].square << std::endl;
        std::cout << "Start time: ";
        zone[i].start.Print();
        std::cout << " End time: ";
        zone[i].end.Print();
        std::cout << std::endl;
    }
}
class Zakaz : public Zapoved
{
private:
    int x = 0;
    int y = 0;
    DefObj kult[10];
    PermitZone Hoz[10];
public:
    Zakaz(int a, int b, std::string n, double s, DefObj def, Director d, PermitZone z, DefObj obj) :Zapoved(a, b, n, s, def, d) { kult[0] = obj; Hoz[0] = z; };
    void Print();
    void AddZone(PermitZone);
    void AddKult(DefObj);
};
void Zakaz::AddZone(PermitZone a)
{
    Hoz[x] = a;
    if (x < 10)
    {
        x++;
    }
    else
    {
        x = 0;
    }
}
void Zakaz::AddKult(DefObj a)
{
    kult[y] = a;
    if (y < 10)
    {
        y++;
    }
    else
    {
        y = 0;
    }
}
void Zakaz::Print()
{
    Zapoved::Print();
    for (int i = 0; i < x; i++)
    {
        std::cout << "Zone " << i << ": " << " Razreshennaya deyatelnost = " << Hoz[i].todo << ", square=" << Hoz[i].square << std::endl;
        std::cout << "Start time: ";
        Hoz[i].start.Print();
        std::cout << " End time: ";
        Hoz[i].end.Print();
        std::cout << std::endl;
    }
    std::cout << "Kultiviruemie objects:" << std::endl;
    for (int i = 0; i < y; i++)
    {
        std::cout << "Object " << i << ": " << kult[i].name << ", count=" << kult[i].count << ", status=" << kult[i].s << std::endl;
    }
}

int main()
{
    DefZone zone(103459, 1234532, "GosZapovednik", 4563.2312);
    std::cout << "zone.Print()" << std::endl;
    zone.Print();
    std::cout << std::endl;
    Director w("Ivanov_I_I", 2206245672, "Selo_Yauly_h15_23");
    DefObj q("ezhevik_koralloviy",2000,Stable);    
    Zapoved zap(1232, 1232144, "Altayskiy", 3422345.1783, q, w);
    std::cout << "zap.AddDef()" << std::endl;
    zap.AddDef();
    std::cout << "zap.Print()" << std::endl;
    zap.Print();
    std::cout << std::endl;
    Director e("Petrov_P_P", 2209321567, "Moscow_Petrovskaya_str_h34_65");
    DefObj r("moh_plakychiy", 10000, Good);
    Time st(15, 6, 2010);
    Time en(23, 9, 2099);
    PermitZone t(Camping, st,en,27542.9783);
    NPark park(65463, 7845768, "Kyrshkaya_kosa", 5643235.21432, r, e, t);
    std::cout << "park.DefZone::Print()" << std::endl;
    park.DefZone::Print();
    std::cout << "park.AddDef()" << std::endl;
    park.AddDef();
    std::cout << "park.AddZone()" << std::endl;
    park.AddZone(t);
    std::cout << "park.Print()" << std::endl;
    park.Print();
    std::cout << std::endl;
    Zakaz zak(34262, 13268532, "Uzno-kamchatskiy", 976654.6566, r, w, t, q);
    std::cout << "park.Print()" << std::endl;
    zak.AddKult(r);
    std::cout << "park.Print()" << std::endl;
    zak.AddZone(t);
    std::cout << "zak.Print()" << std::endl;
    zak.Print();
}