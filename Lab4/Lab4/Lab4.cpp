#include <iostream>
#include <stdlib.h>

class Colour {
public:
    int* r;
    int* g;
    int* b;
    Colour();
    Colour(int, int, int);
    bool Valid();
    void Delete();
};
Colour::Colour()
{
    r = new int(0);
    g = new int(0);
    b = new int(0);
}
Colour::Colour(int i, int j, int k)
{
    r = new int(i);
    g = new int(j);
    b = new int(k);
}
void Colour::Delete()
{
    delete r;
    delete g;
    delete b;
}
bool Colour::Valid()
{
    if (*r < 256 && *r >= 0 && *g < 256 && *g >= 0 && *b < 256 && *b >= 0)
    {
        return true;
    }
    return false;
}
bool operator== (Colour c1, Colour c2)
{
    if (*c1.r == *c2.r && *c1.g == *c2.r && c1.b == c2.b)
    {
        return true;
    }
    return false;
}
bool operator!= (Colour c1, Colour c2)
{
    if (*c1.r != *c2.r || *c1.g != *c2.g || *c1.b != *c2.b)
    {
        return true;
    }
    return false;
}
std::ostream& operator<< (std::ostream& output, Colour c)
{
    output << "R: " << *c.r << " G: " << *c.g << " B: " << *c.b << std::endl;
    return output;
}
std::istream& operator>> (std::istream& input, Colour c)
{
    std::cout << "R:";
    input >> *c.r;
    std::cout << "G:";
    input >> *c.g;
    std::cout << "B:";
    input >> *c.b;
    return input;
}
int main()
{
    Colour a;
    Colour b(120, 15, 34);
    Colour c;
    std::cin >> c;
    std::cout << "a: " << a;
    std::cout << "b: " << b;
    std::cout << "c: " << c;
    std::cout << ((a == c) ? "a == c" : "a != c") << std::endl;
    std::cout << ((a == b) ? "a == b" : "a != b") << std::endl;
    std::cout << ((a != c) ? "a != c" : "a == c") << std::endl;
    std::cout << ((a != b) ? "a != b" : "a == b") << std::endl;
    std::cout << ((a.Valid()) ? "a - Valid colour." : "a - Invalid colour.") << std::endl;
    std::cout << ((b.Valid()) ? "b - Valid colour." : "b - Invalid colour.") << std::endl;
    std::cout << ((c.Valid()) ? "c - Valid colour." : "c - Invalid colour.") << std::endl;
    a.Delete();
    b.Delete();
    c.Delete();
    return 0;
}