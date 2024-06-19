// Lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>

class Matrix {
public:
    int n;
    int m;
    int seed;
    int** Data;
    void initMatrix()
    {
        std::cout << std::endl << "Vvedi n:" << std::endl;
        std::cin >> n;
        std::cout << std::endl << "Vvedi m:" << std::endl;
        std::cin >> m;
        std::cout << std::endl << "Vvedi seed:" << std::endl;
        std::cin >> seed;
        srand(seed);
        Data = new int* [n];
        for (int i = 0; i < n; i++)
        {
            Data[i] = new int[m];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                Data[i][j] = rand()%10;
            }
        }
    }
    void Delete()
    {
        for (int i = 0; i < n; i++)
        {
            delete[] Data[i];
        }
        delete[] Data;
    }
    Matrix operator+ (Matrix extra)
    {
        Matrix temp;
        if (n == extra.n && m == extra.m)
        {
            temp.n = n;
            temp.m = m;
            temp.Data = new int* [n];
            for (int i = 0; i < n; i++)
            {
                temp.Data[i] = new int[m];
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    temp.Data[i][j] = Data[i][j] + extra.Data[i][j];
                }
            }
        }
        else
        {
            std::cout << "Sizes of matrices are not the same!" << std::endl;
        }
        return temp;
    }
    Matrix& operator+= (Matrix b)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                this->Data[i][j] += b.Data[i][j];
            }
        }
        return *this;
    }
    Matrix operator- (Matrix extra)
    {
        Matrix temp;
        if (n == extra.n && m == extra.m)
        {
            temp.n = n;
            temp.m = m;
            temp.Data = new int* [n];
            for (int i = 0; i < n; i++)
            {
                temp.Data[i] = new int[m];
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    temp.Data[i][j] = Data[i][j] - extra.Data[i][j];
                }
            }
        }
        else
        {
            std::cout << "Sizes of matrices are not the same!" << std::endl;
        }
        return temp;
    }
    Matrix& operator-= (Matrix b)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                this->Data[i][j] -= b.Data[i][j];
            }
        }
        return *this;
    }
    Matrix operator* (Matrix extra)
    {
        Matrix temp;
        if (m == extra.n)
        {
            temp.n = n;
            temp.m = extra.m;
            temp.Data = new int* [n];
            for (int i = 0; i < n; i++)
            {
                temp.Data[i] = new int[m];
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    temp.Data[i][j] = 0;
                    for (int k = 0; k < m; k++)
                    {
                        temp.Data[i][j] += Data[i][k] * extra.Data[k][j];
                    }
                }
            }
        }
        else
        {
            std::cout << "Sizes of matrices are not match!" << std::endl;
        }
        return temp;
    }
    Matrix& operator*= (Matrix extra)
    {
        Matrix temp;
        temp.n = n;
        temp.m = m;
        temp.seed = seed;
        temp.Data = new int* [n];
        for (int i = 0; i < n; i++)
        {
            temp.Data[i] = new int[m];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                temp.Data[i][j] = Data[i][j];
            }
        }
        if (m == extra.n)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    Data[i][j] = 0;
                    for (int k = 0; k < m; k++)
                    {
                        Data[i][j] += temp.Data[i][k] * extra.Data[k][j];
                    }
                }
            }
        }
        else
        {
            std::cout << "Sizes of matrices are not match!" << std::endl;
        }
        return *this;
    }
};
std::ostream& operator<< (std::ostream& stream, Matrix mat)
{
    for (int i = 0; i < mat.n; i++)
    {
        for (int j = 0; j < mat.m; j++)
        {
            stream << mat.Data[i][j] << " | ";
        }
        stream << std::endl;
    }
    stream << std::endl;
    return stream;
}
std::istream& operator>> (std::istream& input, Matrix mat)
{
    for (int i = 0; i < mat.n; i++)
    {
        for (int j = 0; j < mat.m; j++)
        {
            std::cout << "Vvedite element [" << i << "][" << j << "]" << std::endl;
            input >> mat.Data[i][j];
        }
    }
    return input;
}

int main()
{
    Matrix a;
    Matrix b;
    a.initMatrix();
    b.initMatrix();
    std::cout << a;
    std::cout << b;
    Matrix c;
    c = a + b;
    std::cout << "c = a + b" << std::endl;
    std::cout << c;
    c = a - b;
    std::cout << "c = a - b" << std::endl;
    std::cout << c;
    a += b;
    std::cout << "a += b" << std::endl;
    std::cout << a;
    a -= b;
    std::cout << "a -= b" << std::endl;
    std::cout << a;
    c = a * b;
    std::cout << "c = a * b" << std::endl;
    std::cout << c;
    a *= b;
    std::cout << "a *= b" << std::endl;
    std::cout << a;
    std::cin >> a;
    std::cout << a;
    a.Delete();
    b.Delete();
    c.Delete();
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"