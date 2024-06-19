#include <iostream>
#include <stdlib.h>
#include <time.h>

class Timer {
private:
    int x = 0;
    bool go;
    time_t time[20];
    time_t start;
    time_t last;
public:
    Timer();
    void StartTime();
    void StopTime();
    void SaveTime();
    void ClearTimers();
    friend std::ostream& operator<< (std::ostream&, Timer);
};
Timer::Timer()
{
    for (int i = 0 ; i < 20; i++)
    {
        time[i] = 0;
    }
    start = std::time(NULL);
    last = start;
    go = false;
}
void Timer::StartTime()
{
    if (go)
    {
        go = true;
        std::cout << "Timer reseted" << std::endl;
        start = std::time(NULL);
    }
    else
    {
        start = std::time(NULL);
        go = true;
        std::cout << "Timer started" << std::endl;        
    }
    
}
void Timer::StopTime()
{
    if (go)
    {
        last = std::time(NULL);
        go = false;
        std::cout << "Timer stopped" << std::endl;
        std::cout << "Value: " << difftime(last, start) << std::endl;
    }
    else
    {
        start = start + std::time(NULL) - last;
        go = true;
        std::cout << "Timer continued" << std::endl;
    }
    
}
void Timer::SaveTime()
{
    if (go)
    {
        time[x] = difftime(std::time(NULL), start);
        std::cout << x << ": " << time[x] << std::endl;
        x++;
    }
    else
    {
        time[x] = difftime(last, start);
        std::cout << x << ": " << time[x] << std::endl;
        x++;
    }    
}
void Timer::ClearTimers()
{
    for (int i = 0; i < x; i++)
    {
        time[i] = 0;
    }
    x = 0;
}
std::ostream& operator<< (std::ostream& output, Timer t)
{    
    for (int i = 0; i < t.x; i++)
    {
        output << i << ": " << t.time[i] << std::endl;
    }
    return output;
}
int main()
{
    char com = 'h';
    Timer a;
    while (com != 'q')
    {
        switch (com)
        {
        case 'h':
        {
            std::cout << "s - start/reset timer" << std::endl;
            std::cout << "d - stop/continue timer" << std::endl;
            std::cout << "a - save timer" << std::endl;
            std::cout << "c - clear timers" << std::endl;
            std::cout << "p - print timers" << std::endl;
            std::cout << "q - quit program" << std::endl;
            break;
        }
        case 's':
        {
            a.StartTime();
            break;
        }
        case 'd':
        {
            a.StopTime();
            break;
        }
        case 'a':
        {
            a.SaveTime();
            break;
        }
        case 'c':
        {
            a.ClearTimers();
            break;
        }
        case 'p':
        {
            std::cout << a;
            break;
        }
        default:
        {
            std::cout << "s - start timer" << std::endl;
            std::cout << "d - stop timer" << std::endl;
            std::cout << "a - save timer" << std::endl;
            std::cout << "c - clear timers" << std::endl;
            std::cout << "p - print timers" << std::endl;
            std::cout << "q - quit program" << std::endl;
            break;
        }
        }
        std::cout << ">";
        std::cin >> com;
    }
    return 0;
}
