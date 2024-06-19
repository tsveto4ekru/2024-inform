// Lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>

class Time{
public:
    bool f;
    int* h;
    int* m;
    int* s;
    Time();
    Time(int*, int*, int*);
    Time operator+(Time);
    Time& operator+=(Time);
    Time operator-(Time);
    Time& operator-=(Time);
    void DelTime();
    void PrintTwelve();
};
Time::Time()
{
    this->f = false;
    this->h = new int(0);
    this->m = new int(0);
    this->s = new int(0);
}
Time::Time(int* a, int* b, int* c)
{
    this->f = false;
    this->h = new int(*a);
    this->m = new int(*b);
    this->s = new int(*c);
}
void Time::DelTime()
{
    delete this->h;
    delete this->m;
    delete this->s;
}
Time Time::operator+ (Time t)
{
    Time temp;
    int x = 0;
    
    *temp.s= *s + *t.s;
    if (*temp.s > 59)
    {
        x = *temp.s / 60;
        *temp.s = *temp.s % 60;
    }
    *temp.m = *m + *t.m + x;
    x = 0;
    if (*temp.m > 59)
    {
        x = *temp.m / 60;
        *temp.m = *temp.m % 60;
    }
    *temp.h = *h + *t.h +x;
    if (*temp.h > 23)
    {
        *temp.h = *temp.h % 24;
    }
    return temp;
}
Time& Time::operator+= (Time t)
{
    int x = 0;
    *this->s += *t.s;
    if (*this->s > 59)
    {
        x = *this->s / 60;
        *this->s = *this->s % 60;
    }
    *this->m += *t.m + x;
    x = 0;
    if (*this->m > 59)
    {
        x = *this->m / 60;
        *this->m = *this->m % 60;
    }
    *this->h += *t.h + x;
    if (*this->h > 23)
    {
        *this->h = *this->h % 24;
    }
    return *this;
}
Time Time::operator- (Time t)
{
    Time temp;
    int x = 0;

    *temp.s = *s - *t.s;
    if (*temp.s < -59)
    {
        x = *temp.s / -60;
        *temp.s = *temp.s % -60;
    }
    *temp.m = *m - *t.m - x;
    x = 0;
    if (*temp.m < -59)
    {
        x = *temp.m / -60;
        *temp.m = *temp.m % -60;
    }
    *temp.h = *h - *t.h - x;
    return temp;
}
Time& Time::operator-= (Time t)
{
    int x = 0;
    *this->s -= *t.s;
    if (*this->s < -59)
    {
        x = *this->s / -60;
        *this->s = *this->s % -60;
    }
    *this->m -= *t.m + x;
    x = 0;
    if (*this->m < -59)
    {
        x = *this->m / -60;
        *this->m = *this->m % -60;
    }
    *this->h -= *t.h + x;
    return *this;
}
bool operator== (Time t1, Time t2)
{
    if (*t1.h == *t2.h && *t1.m == *t2.m && *t1.s == *t2.s)
    {
        return true;
    }
    return false;
}
bool operator!= (Time t1, Time t2)
{
    if (*t1.h != *t2.h || *t1.m != *t2.m || *t1.s != *t2.s)
    {
        return true;
    }
    return false;
}
bool operator> (Time t1, Time t2)
{
    if (*t1.h > *t2.h)
    {
        return true;
    }
    else if (*t1.h == *t2.h)
    {
        if (*t1.m > *t2.m)
        {
            return true;
        }
        else if (*t1.m == *t2.m)
        {
            if (*t1.s > *t2.s)
            {
                return true;
            }
        }
    }
    return false;
}
bool operator< (Time t1, Time t2)
{
    if (*t1.h < *t2.h)
    {
        return true;
    }
    else if (*t1.h == *t2.h)
    {
        if (*t1.m < *t2.m)
        {
            return true;
        }
        else if (*t1.m == *t2.m)
        {
            if (*t1.s < *t2.s)
            {
                return true;
            }
        }
    }
    return false;
}
void Time::PrintTwelve()
{
    int hh;

    if (*h > 11)
    {
        hh = *h % 12;
        std::cout << "pm " << hh << ":" << *m << ":" << *s << std::endl;
    }
    else
    {
        hh = *h % 12;
        std::cout << "am " << hh << ":" << *m << ":" << *s << std::endl;
    }
}
std::ostream& operator<< (std::ostream& output, Time t)
{
    output << *t.h << ":" << *t.m << ":" << *t.s << std::endl;
    return output;
}
std::istream& operator>> (std::istream& input, Time t)
{
    std::cout << "Hours(0-23):";
    input >> *t.h;
    std::cout << std::endl;
    std::cout << "Minutes(0-60):";
    input >> *t.m;
    std::cout << std::endl;
    std::cout << "Seconds(0-60):";
    input >> *t.s;
    std::cout << std::endl;
    return input;
}

int main()
{
    Time a;
    std::cout << a;
    int* hh;
    hh = new int(14);
    int* mm;
    mm = new int(15);
    int* ss;
    ss = new int(46);
    Time b(hh,mm,ss);
    std::cout << "b: " << b;
    Time c;
    std::cin >> c;
    std::cout << "c: " << c;
    c = a + b;
    std::cout << "c=a+b: " << c;
    a += b;
    std::cout << "a+=b: " << a;
    c = a - b;
    std::cout << "c=a-b: " << c;
    a -= b;
    std::cout << "a-=b: " << a;
    std::cout << ((a == c) ? "a == c" : "a != c") << std::endl;
    std::cout << ((a == b) ? "a == b" : "a != b") << std::endl;
    std::cout << ((a != c) ? "a != c" : "a == c") << std::endl;
    std::cout << ((a != b) ? "a != b" : "a == b") << std::endl;
    std::cout << ((a < b) ? "a < b" : "a >= b") << std::endl;
    std::cout << ((b > a) ? "b > a" : "b <= a") << std::endl;
    std::cout << ((a < c) ? "a < c" : "a >= c") << std::endl;
    a.PrintTwelve();
    b.PrintTwelve();
    a.DelTime();
    b.DelTime();
    c.DelTime();
    delete hh;
    delete mm;
    delete ss;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
