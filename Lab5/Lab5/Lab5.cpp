#include <iostream>
#include <stdlib.h>
#include <string>

class Pwd {
private:
    std::string pass;
    int hard;
public: 
    Pwd();
    Pwd(std::string);
    int Hardness();
    friend bool operator==(Pwd, Pwd);
    friend bool operator!=(Pwd, Pwd);
    friend std::ostream& operator<< (std::ostream&, Pwd);
};
Pwd::Pwd()
{
    pass = "pass";
    hard = Hardness();
}
Pwd::Pwd(std::string p)
{
    pass = p;
    hard = Hardness();
}
int Pwd::Hardness()
{
    int l = 0;
    int u = 0;
    int d = 0;
    int p = 0;
    int h = 0;
    for (int i = 0; i < pass.length(); i++)
    {
        if (std::islower(pass[i]))
        {
            l++;
        }
        if (std::isupper(pass[i]))
        {
            u++;
        }
        if (std::isdigit(pass[i]))
        {
            d++;
        }
        if (std::ispunct(pass[i]))
        {
            p++;
        }
    }
    if (l != 0 && u != 0 && d != 0 && p != 0 && pass.length() >= 10) 
    { 
        h = 3;
    }
    else if (pass.length() >= 10 && ((l != 0 || u != 0) && (d != 0 || p != 0)))
    {
        h = 2;
    }
    else
    {
        h = 1;
    }
    return h;
}
bool operator== (Pwd p1, Pwd p2)
{
    if (p1.pass == p2.pass)
    {
        return true;
    }
    return false;
}
bool operator!= (Pwd p1, Pwd p2)
{
    if (p1.pass != p2.pass)
    {
        return true;
    }
    return false;
}
std::ostream& operator<< (std::ostream& output, Pwd p)
{
    for (int i = 0; i < p.pass.length(); i++)
    {
        output << "*";
    }
    switch (p.hard)
    {
    case 1: 
        output << " Weak password!!!" << std::endl;
        break;
    case 2:
        output << " Medium password..." << std::endl;
        break;
    case 3:
        output << " Good password ^_^" << std::endl;
        break;
    }
    return output;
}
int main()
{
    Pwd a;
    Pwd b("longpassw0rd");
    Pwd c("Str0ngPa&&wd");
    std::cout << "Password a: " << a;
    std::cout << "Password b: " << b;
    std::cout << "Password c: " << c;
    std::cout << ((a == c) ? "a == c" : "a != c") << std::endl;
    std::cout << ((a == b) ? "a == b" : "a != b") << std::endl;
    std::cout << ((a != c) ? "a != c" : "a == c") << std::endl;
    std::cout << ((a != b) ? "a != b" : "a == b") << std::endl;
    return 0;
}