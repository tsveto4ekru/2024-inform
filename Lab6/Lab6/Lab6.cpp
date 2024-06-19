#include <iostream>
#include <stdlib.h>

class Deposit {
private:
    static int total;
    int id;
    double money;
    double percent;
    int period;
    bool add;
    bool draw;
public:
    Deposit(double);
    Deposit(double, double, int, bool, bool);
    Deposit operator+(double);
    Deposit operator-(double);
    double ProfitAll();
    double ProfitTime(int);
    friend std::ostream& operator<< (std::ostream&, Deposit);
};
Deposit::Deposit(double m)
{
    total++;
    id = total;
    money = m;
    percent = 1.5;
    add = false;
    draw = false;
    period = 12;
}
Deposit::Deposit(double m, double p, int x, bool a, bool d)
{
    total++;
    id = total;
    money = m;
    percent = p;
    period = x;
    add = a;
    draw = d;
}
Deposit Deposit::operator+(double m)
{
    if (add)
    {
        money += m;
    }
    else
    {
        std::cout << "Operation not permitted;" << std::endl;
    }
    return *this;
}
Deposit Deposit::operator-(double m)
{
    if (draw)
    {
        if (money >= m)
        {
            money -= m;
        }
        else
        {
            std::cout << "Nedostato4no sredstv" << std::endl;
        }
    }
    return *this;
}
double Deposit::ProfitAll()
{
    double prof = 0;
    for (int i = 0; i < period; i++)
    {
        prof = prof + money * percent;
    }
    return prof;
}
double Deposit::ProfitTime(int x)
{
    double prof = 0;
    for (int i = 0; i < x; i++)
    {
        prof = prof + money * percent;
    }
    return prof;
}
std::ostream& operator<< (std::ostream& output, Deposit d)
{
    output << "ID: " << d.id << std::endl << "Money: " << std::fixed << d.money << std::endl << "% per month: " << d.percent << std::endl << "Period: " << d.period << " month(s)" << std::endl << "Add: " << d.add << std::endl << "Draw: " << d.draw << std::endl << std::endl;
    return output;
}
int Deposit::total = 0;
int main()
{
    Deposit a(120000.45);
    Deposit b(1000000.0, 2.3, 10, true, true);
    Deposit c(10000, 5, 24, false, true);
    std::cout.precision(2);
    a = a + 10000;
    std::cout << "a: " << a;
    b = b + 500000;
    std::cout << "b: " << b;
    c = c - 12000;    
    std::cout << "c: " << c;    
    std::cout << "Full profit on a: " << std::fixed <<a.ProfitAll() << std::endl;
    std::cout << "Profit in 5 months a: " << std::fixed << a.ProfitTime(5) << std::endl;
    std::cout << "Full profit on b: " << std::fixed << b.ProfitAll() << std::endl;
    std::cout << "Profit in 7 months b: " << std::fixed << b.ProfitTime(7) << std::endl;
    std::cout << "Full profit on c: " << std::fixed << c.ProfitAll() << std::endl;
    std::cout << "Profit in 12 months c: " << std::fixed << c.ProfitTime(12) << std::endl;
    return 0;
}