#include <iostream>
#include <stdlib.h>

class Dot {
public:
    int* x;
    int* y;
    Dot();
    Dot(int, int);
    void Where();
    bool Partof();
    void Delete();
};
Dot::Dot()
{
    x = new int(0);
    y = new int(0);
}
Dot::Dot(int i, int j)
{
    x = new int(i);
    y = new int(j);
}
void Dot::Where()
{
    if (*x > 0 && *y > 0)
    {
        std::cout << "1 chetvert." << std::endl;
    }
    else if (*x < 0 && *y > 0)
    {
        std::cout << "2 chetvert." << std::endl;
    }
    else if (*x < 0 && *y < 0)
    {
        std::cout << "3 chetvert." << std::endl;
    }
    else if (*x > 0 && *y < 0)
    {
        std::cout << "4 chetvert." << std::endl;
    }
    else if (*x == 0 && *y == 0)
    {
        std::cout << "Nachalo coordinat." << std::endl;
    }
    else if (*x == 0 && *y != 0)
    {
        std::cout << "Na osi OY." << std::endl;
    }
    else if (*x != 0 && *y == 0)
    {
        std::cout << "Na osi OX." << std::endl;
    }
}
bool Dot::Partof()
{
    if (*y == *x * *x)
    {
        return true;
    }
    return false;
}
void Dot::Delete()
{
    delete x;
    delete y;
}
bool operator== (Dot d1, Dot d2)
{
    if (*d1.x == *d2.x && *d1.y == *d2.y)
    {
        return true;
    }
    return false;
}
bool operator!= (Dot d1, Dot d2)
{
    if (*d1.x != *d2.x || *d1.y != *d2.y)
    {
        return true;
    }
    return false;
}
std::ostream& operator<< (std::ostream& output, Dot d)
{
    output << "x: " << *d.x << " y: " << *d.y << std::endl;
    return output;
}
std::istream& operator>> (std::istream& input, Dot d)
{
    std::cout << "x:";
    input >> *d.x;
    std::cout << "y:";
    input >> *d.y;
    return input;
}
int main()
{
    Dot a;
    std::cout << "a: " << a;
    Dot b(3, -4);
    Dot c;
    std::cin >> c;
    std::cout << "a: " << a;
    std::cout << "b: " << b;
    std::cout << "c: " << c;
    std::cout << ((a == c) ? "a == c" : "a != c") << std::endl;
    std::cout << ((a == b) ? "a == b" : "a != b") << std::endl;
    std::cout << ((a != c) ? "a != c" : "a == c") << std::endl;
    std::cout << ((a != b) ? "a != b" : "a == b") << std::endl;
    std::cout << ((c.Partof()) ? "true" : "false") << std::endl;
    c.Where();
    a.Delete();
    b.Delete();
    c.Delete();
    return 0;
}