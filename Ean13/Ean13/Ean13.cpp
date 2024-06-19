#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <SFML/Graphics.hpp>

sf::VertexArray left(sf::Lines, 84);
sf::VertexArray right(sf::Lines, 84);

void lcode(int pos, int num)
{
    switch (num)
    {
    case 0:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::White;
        left[pos * 14 - 11].color = sf::Color::White;
        left[pos * 14 - 10].color = sf::Color::White;
        left[pos * 14 - 9].color = sf::Color::White;
        left[pos * 14 - 8].color = sf::Color::Black;
        left[pos * 14 - 7].color = sf::Color::Black;
        left[pos * 14 - 6].color = sf::Color::Black;
        left[pos * 14 - 5].color = sf::Color::Black;
        left[pos * 14 - 4].color = sf::Color::White;
        left[pos * 14 - 3].color = sf::Color::White;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 1:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::White;
        left[pos * 14 - 11].color = sf::Color::White;
        left[pos * 14 - 10].color = sf::Color::Black;
        left[pos * 14 - 9].color = sf::Color::Black;
        left[pos * 14 - 8].color = sf::Color::Black;
        left[pos * 14 - 7].color = sf::Color::Black;
        left[pos * 14 - 6].color = sf::Color::White;
        left[pos * 14 - 5].color = sf::Color::White;
        left[pos * 14 - 4].color = sf::Color::White;
        left[pos * 14 - 3].color = sf::Color::White;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 2:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::White;
        left[pos * 14 - 11].color = sf::Color::White;
        left[pos * 14 - 10].color = sf::Color::Black;
        left[pos * 14 - 9].color = sf::Color::Black;
        left[pos * 14 - 8].color = sf::Color::White;
        left[pos * 14 - 7].color = sf::Color::White;
        left[pos * 14 - 6].color = sf::Color::White;
        left[pos * 14 - 5].color = sf::Color::White;
        left[pos * 14 - 4].color = sf::Color::Black;
        left[pos * 14 - 3].color = sf::Color::Black;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 3:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::Black;
        left[pos * 14 - 11].color = sf::Color::Black;
        left[pos * 14 - 10].color = sf::Color::Black;
        left[pos * 14 - 9].color = sf::Color::Black;
        left[pos * 14 - 8].color = sf::Color::Black;
        left[pos * 14 - 7].color = sf::Color::Black;
        left[pos * 14 - 6].color = sf::Color::Black;
        left[pos * 14 - 5].color = sf::Color::Black;
        left[pos * 14 - 4].color = sf::Color::White;
        left[pos * 14 - 3].color = sf::Color::White;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 4:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::Black;
        left[pos * 14 - 11].color = sf::Color::Black;
        left[pos * 14 - 10].color = sf::Color::White;
        left[pos * 14 - 9].color = sf::Color::White;
        left[pos * 14 - 8].color = sf::Color::White;
        left[pos * 14 - 7].color = sf::Color::White;
        left[pos * 14 - 6].color = sf::Color::White;
        left[pos * 14 - 5].color = sf::Color::White;
        left[pos * 14 - 4].color = sf::Color::Black;
        left[pos * 14 - 3].color = sf::Color::Black;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 5:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::Black;
        left[pos * 14 - 11].color = sf::Color::Black;
        left[pos * 14 - 10].color = sf::Color::Black;
        left[pos * 14 - 9].color = sf::Color::Black;
        left[pos * 14 - 8].color = sf::Color::White;
        left[pos * 14 - 7].color = sf::Color::White;
        left[pos * 14 - 6].color = sf::Color::White;
        left[pos * 14 - 5].color = sf::Color::White;
        left[pos * 14 - 4].color = sf::Color::White;
        left[pos * 14 - 3].color = sf::Color::White;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 6:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::Black;
        left[pos * 14 - 11].color = sf::Color::Black;
        left[pos * 14 - 10].color = sf::Color::White;
        left[pos * 14 - 9].color = sf::Color::White;
        left[pos * 14 - 8].color = sf::Color::Black;
        left[pos * 14 - 7].color = sf::Color::Black;
        left[pos * 14 - 6].color = sf::Color::Black;
        left[pos * 14 - 5].color = sf::Color::Black;
        left[pos * 14 - 4].color = sf::Color::Black;
        left[pos * 14 - 3].color = sf::Color::Black;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 7:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::Black;
        left[pos * 14 - 11].color = sf::Color::Black;
        left[pos * 14 - 10].color = sf::Color::Black;
        left[pos * 14 - 9].color = sf::Color::Black;
        left[pos * 14 - 8].color = sf::Color::Black;
        left[pos * 14 - 7].color = sf::Color::Black;
        left[pos * 14 - 6].color = sf::Color::White;
        left[pos * 14 - 5].color = sf::Color::White;
        left[pos * 14 - 4].color = sf::Color::Black;
        left[pos * 14 - 3].color = sf::Color::Black;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 8:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::Black;
        left[pos * 14 - 11].color = sf::Color::Black;
        left[pos * 14 - 10].color = sf::Color::Black;
        left[pos * 14 - 9].color = sf::Color::Black;
        left[pos * 14 - 8].color = sf::Color::White;
        left[pos * 14 - 7].color = sf::Color::White;
        left[pos * 14 - 6].color = sf::Color::Black;
        left[pos * 14 - 5].color = sf::Color::Black;
        left[pos * 14 - 4].color = sf::Color::Black;
        left[pos * 14 - 3].color = sf::Color::Black;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 9:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::White;
        left[pos * 14 - 11].color = sf::Color::White;
        left[pos * 14 - 10].color = sf::Color::White;
        left[pos * 14 - 9].color = sf::Color::White;
        left[pos * 14 - 8].color = sf::Color::Black;
        left[pos * 14 - 7].color = sf::Color::Black;
        left[pos * 14 - 6].color = sf::Color::White;
        left[pos * 14 - 5].color = sf::Color::White;
        left[pos * 14 - 4].color = sf::Color::Black;
        left[pos * 14 - 3].color = sf::Color::Black;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    }
}
void gcode(int pos, int num)
{
    switch (num)
    {
    case 0:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::Black;
        left[pos * 14 - 11].color = sf::Color::Black;
        left[pos * 14 - 10].color = sf::Color::White;
        left[pos * 14 - 9].color = sf::Color::White;
        left[pos * 14 - 8].color = sf::Color::White;
        left[pos * 14 - 7].color = sf::Color::White;
        left[pos * 14 - 6].color = sf::Color::Black;
        left[pos * 14 - 5].color = sf::Color::Black;
        left[pos * 14 - 4].color = sf::Color::Black;
        left[pos * 14 - 3].color = sf::Color::Black;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 1:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::Black;
        left[pos * 14 - 11].color = sf::Color::Black;
        left[pos * 14 - 10].color = sf::Color::Black;
        left[pos * 14 - 9].color = sf::Color::Black;
        left[pos * 14 - 8].color = sf::Color::White;
        left[pos * 14 - 7].color = sf::Color::White;
        left[pos * 14 - 6].color = sf::Color::White;
        left[pos * 14 - 5].color = sf::Color::White;
        left[pos * 14 - 4].color = sf::Color::Black;
        left[pos * 14 - 3].color = sf::Color::Black;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 2:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::White;
        left[pos * 14 - 11].color = sf::Color::White;
        left[pos * 14 - 10].color = sf::Color::Black;
        left[pos * 14 - 9].color = sf::Color::Black;
        left[pos * 14 - 8].color = sf::Color::Black;
        left[pos * 14 - 7].color = sf::Color::Black;
        left[pos * 14 - 6].color = sf::Color::White;
        left[pos * 14 - 5].color = sf::Color::White;
        left[pos * 14 - 4].color = sf::Color::Black;
        left[pos * 14 - 3].color = sf::Color::Black;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 3:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::Black;
        left[pos * 14 - 11].color = sf::Color::Black;
        left[pos * 14 - 10].color = sf::Color::White;
        left[pos * 14 - 9].color = sf::Color::White;
        left[pos * 14 - 8].color = sf::Color::White;
        left[pos * 14 - 7].color = sf::Color::White;
        left[pos * 14 - 6].color = sf::Color::White;
        left[pos * 14 - 5].color = sf::Color::White;
        left[pos * 14 - 4].color = sf::Color::White;
        left[pos * 14 - 3].color = sf::Color::White;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 4:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::White;
        left[pos * 14 - 11].color = sf::Color::White;
        left[pos * 14 - 10].color = sf::Color::Black;
        left[pos * 14 - 9].color = sf::Color::Black;
        left[pos * 14 - 8].color = sf::Color::Black;
        left[pos * 14 - 7].color = sf::Color::Black;
        left[pos * 14 - 6].color = sf::Color::Black;
        left[pos * 14 - 5].color = sf::Color::Black;
        left[pos * 14 - 4].color = sf::Color::White;
        left[pos * 14 - 3].color = sf::Color::White;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 5:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::Black;
        left[pos * 14 - 11].color = sf::Color::Black;
        left[pos * 14 - 10].color = sf::Color::Black;
        left[pos * 14 - 9].color = sf::Color::Black;
        left[pos * 14 - 8].color = sf::Color::Black;
        left[pos * 14 - 7].color = sf::Color::Black;
        left[pos * 14 - 6].color = sf::Color::White;
        left[pos * 14 - 5].color = sf::Color::White;
        left[pos * 14 - 4].color = sf::Color::White;
        left[pos * 14 - 3].color = sf::Color::White;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 6:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::White;
        left[pos * 14 - 11].color = sf::Color::White;
        left[pos * 14 - 10].color = sf::Color::White;
        left[pos * 14 - 9].color = sf::Color::White;
        left[pos * 14 - 8].color = sf::Color::White;
        left[pos * 14 - 7].color = sf::Color::White;
        left[pos * 14 - 6].color = sf::Color::Black;
        left[pos * 14 - 5].color = sf::Color::Black;
        left[pos * 14 - 4].color = sf::Color::White;
        left[pos * 14 - 3].color = sf::Color::White;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 7:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::White;
        left[pos * 14 - 11].color = sf::Color::White;
        left[pos * 14 - 10].color = sf::Color::Black;
        left[pos * 14 - 9].color = sf::Color::Black;
        left[pos * 14 - 8].color = sf::Color::White;
        left[pos * 14 - 7].color = sf::Color::White;
        left[pos * 14 - 6].color = sf::Color::White;
        left[pos * 14 - 5].color = sf::Color::White;
        left[pos * 14 - 4].color = sf::Color::White;
        left[pos * 14 - 3].color = sf::Color::White;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 8:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::White;
        left[pos * 14 - 11].color = sf::Color::White;
        left[pos * 14 - 10].color = sf::Color::White;
        left[pos * 14 - 9].color = sf::Color::White;
        left[pos * 14 - 8].color = sf::Color::Black;
        left[pos * 14 - 7].color = sf::Color::Black;
        left[pos * 14 - 6].color = sf::Color::White;
        left[pos * 14 - 5].color = sf::Color::White;
        left[pos * 14 - 4].color = sf::Color::White;
        left[pos * 14 - 3].color = sf::Color::White;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    case 9:
    {
        left[pos * 14 - 14].color = sf::Color::White;
        left[pos * 14 - 13].color = sf::Color::White;
        left[pos * 14 - 12].color = sf::Color::White;
        left[pos * 14 - 11].color = sf::Color::White;
        left[pos * 14 - 10].color = sf::Color::Black;
        left[pos * 14 - 9].color = sf::Color::Black;
        left[pos * 14 - 8].color = sf::Color::White;
        left[pos * 14 - 7].color = sf::Color::White;
        left[pos * 14 - 6].color = sf::Color::Black;
        left[pos * 14 - 5].color = sf::Color::Black;
        left[pos * 14 - 4].color = sf::Color::Black;
        left[pos * 14 - 3].color = sf::Color::Black;
        left[pos * 14 - 2].color = sf::Color::Black;
        left[pos * 14 - 1].color = sf::Color::Black;
        break;
    }
    }
}
void rcode(int pos, int num)
{
    switch (num)
    {
    case 0:
    {
        right[pos * 14 - 14].color = sf::Color::Black;
        right[pos * 14 - 13].color = sf::Color::Black;
        right[pos * 14 - 12].color = sf::Color::Black;
        right[pos * 14 - 11].color = sf::Color::Black;
        right[pos * 14 - 10].color = sf::Color::Black;
        right[pos * 14 - 9].color = sf::Color::Black;
        right[pos * 14 - 8].color = sf::Color::White;
        right[pos * 14 - 7].color = sf::Color::White;
        right[pos * 14 - 6].color = sf::Color::White;
        right[pos * 14 - 5].color = sf::Color::White;
        right[pos * 14 - 4].color = sf::Color::Black;
        right[pos * 14 - 3].color = sf::Color::Black;
        right[pos * 14 - 2].color = sf::Color::White;
        right[pos * 14 - 1].color = sf::Color::White;
        break;
    }
    case 1:
    {
        right[pos * 14 - 14].color = sf::Color::Black;
        right[pos * 14 - 13].color = sf::Color::Black;
        right[pos * 14 - 12].color = sf::Color::Black;
        right[pos * 14 - 11].color = sf::Color::Black;
        right[pos * 14 - 10].color = sf::Color::White;
        right[pos * 14 - 9].color = sf::Color::White;
        right[pos * 14 - 8].color = sf::Color::White;
        right[pos * 14 - 7].color = sf::Color::White;
        right[pos * 14 - 6].color = sf::Color::Black;
        right[pos * 14 - 5].color = sf::Color::Black;
        right[pos * 14 - 4].color = sf::Color::Black;
        right[pos * 14 - 3].color = sf::Color::Black;
        right[pos * 14 - 2].color = sf::Color::White;
        right[pos * 14 - 1].color = sf::Color::White;
        break;
    }
    case 2:
    {
        right[pos * 14 - 14].color = sf::Color::Black;
        right[pos * 14 - 13].color = sf::Color::Black;
        right[pos * 14 - 12].color = sf::Color::Black;
        right[pos * 14 - 11].color = sf::Color::Black;
        right[pos * 14 - 10].color = sf::Color::White;
        right[pos * 14 - 9].color = sf::Color::White;
        right[pos * 14 - 8].color = sf::Color::Black;
        right[pos * 14 - 7].color = sf::Color::Black;
        right[pos * 14 - 6].color = sf::Color::Black;
        right[pos * 14 - 5].color = sf::Color::Black;
        right[pos * 14 - 4].color = sf::Color::White;
        right[pos * 14 - 3].color = sf::Color::White;
        right[pos * 14 - 2].color = sf::Color::White;
        right[pos * 14 - 1].color = sf::Color::White;
        break;
    }
    case 3:
    {
        right[pos * 14 - 14].color = sf::Color::Black;
        right[pos * 14 - 13].color = sf::Color::Black;
        right[pos * 14 - 12].color = sf::Color::White;
        right[pos * 14 - 11].color = sf::Color::White;
        right[pos * 14 - 10].color = sf::Color::White;
        right[pos * 14 - 9].color = sf::Color::White;
        right[pos * 14 - 8].color = sf::Color::White;
        right[pos * 14 - 7].color = sf::Color::White;
        right[pos * 14 - 6].color = sf::Color::White;
        right[pos * 14 - 5].color = sf::Color::White;
        right[pos * 14 - 4].color = sf::Color::Black;
        right[pos * 14 - 3].color = sf::Color::Black;
        right[pos * 14 - 2].color = sf::Color::White;
        right[pos * 14 - 1].color = sf::Color::White;
        break;
    }
    case 4:
    {
        right[pos * 14 - 14].color = sf::Color::Black;
        right[pos * 14 - 13].color = sf::Color::Black;
        right[pos * 14 - 12].color = sf::Color::White;
        right[pos * 14 - 11].color = sf::Color::White;
        right[pos * 14 - 10].color = sf::Color::Black;
        right[pos * 14 - 9].color = sf::Color::Black;
        right[pos * 14 - 8].color = sf::Color::Black;
        right[pos * 14 - 7].color = sf::Color::Black;
        right[pos * 14 - 6].color = sf::Color::Black;
        right[pos * 14 - 5].color = sf::Color::Black;
        right[pos * 14 - 4].color = sf::Color::White;
        right[pos * 14 - 3].color = sf::Color::White;
        right[pos * 14 - 2].color = sf::Color::White;
        right[pos * 14 - 1].color = sf::Color::White;
        break;
    }
    case 5:
    {
        right[pos * 14 - 14].color = sf::Color::Black;
        right[pos * 14 - 13].color = sf::Color::Black;
        right[pos * 14 - 12].color = sf::Color::White;
        right[pos * 14 - 11].color = sf::Color::White;
        right[pos * 14 - 10].color = sf::Color::White;
        right[pos * 14 - 9].color = sf::Color::White;
        right[pos * 14 - 8].color = sf::Color::Black;
        right[pos * 14 - 7].color = sf::Color::Black;
        right[pos * 14 - 6].color = sf::Color::Black;
        right[pos * 14 - 5].color = sf::Color::Black;
        right[pos * 14 - 4].color = sf::Color::Black;
        right[pos * 14 - 3].color = sf::Color::Black;
        right[pos * 14 - 2].color = sf::Color::White;
        right[pos * 14 - 1].color = sf::Color::White;
        break;
    }
    case 6:
    {
        right[pos * 14 - 14].color = sf::Color::Black;
        right[pos * 14 - 13].color = sf::Color::Black;
        right[pos * 14 - 12].color = sf::Color::White;
        right[pos * 14 - 11].color = sf::Color::White;
        right[pos * 14 - 10].color = sf::Color::Black;
        right[pos * 14 - 9].color = sf::Color::Black;
        right[pos * 14 - 8].color = sf::Color::White;
        right[pos * 14 - 7].color = sf::Color::White;
        right[pos * 14 - 6].color = sf::Color::White;
        right[pos * 14 - 5].color = sf::Color::White;
        right[pos * 14 - 4].color = sf::Color::White;
        right[pos * 14 - 3].color = sf::Color::White;
        right[pos * 14 - 2].color = sf::Color::White;
        right[pos * 14 - 1].color = sf::Color::White;
        break;
    }
    case 7:
    {
        right[pos * 14 - 14].color = sf::Color::Black;
        right[pos * 14 - 13].color = sf::Color::Black;
        right[pos * 14 - 12].color = sf::Color::White;
        right[pos * 14 - 11].color = sf::Color::White;
        right[pos * 14 - 10].color = sf::Color::White;
        right[pos * 14 - 9].color = sf::Color::White;
        right[pos * 14 - 8].color = sf::Color::White;
        right[pos * 14 - 7].color = sf::Color::White;
        right[pos * 14 - 6].color = sf::Color::Black;
        right[pos * 14 - 5].color = sf::Color::Black;
        right[pos * 14 - 4].color = sf::Color::White;
        right[pos * 14 - 3].color = sf::Color::White;
        right[pos * 14 - 2].color = sf::Color::White;
        right[pos * 14 - 1].color = sf::Color::White;
        break;
    }
    case 8:
    {
        right[pos * 14 - 14].color = sf::Color::Black;
        right[pos * 14 - 13].color = sf::Color::Black;
        right[pos * 14 - 12].color = sf::Color::White;
        right[pos * 14 - 11].color = sf::Color::White;
        right[pos * 14 - 10].color = sf::Color::White;
        right[pos * 14 - 9].color = sf::Color::White;
        right[pos * 14 - 8].color = sf::Color::Black;
        right[pos * 14 - 7].color = sf::Color::Black;
        right[pos * 14 - 6].color = sf::Color::White;
        right[pos * 14 - 5].color = sf::Color::White;
        right[pos * 14 - 4].color = sf::Color::White;
        right[pos * 14 - 3].color = sf::Color::White;
        right[pos * 14 - 2].color = sf::Color::White;
        right[pos * 14 - 1].color = sf::Color::White;
        break;
    }
    case 9:
    {
        right[pos * 14 - 14].color = sf::Color::Black;
        right[pos * 14 - 13].color = sf::Color::Black;
        right[pos * 14 - 12].color = sf::Color::Black;
        right[pos * 14 - 11].color = sf::Color::Black;
        right[pos * 14 - 10].color = sf::Color::Black;
        right[pos * 14 - 9].color = sf::Color::Black;
        right[pos * 14 - 8].color = sf::Color::White;
        right[pos * 14 - 7].color = sf::Color::White;
        right[pos * 14 - 6].color = sf::Color::Black;
        right[pos * 14 - 5].color = sf::Color::Black;
        right[pos * 14 - 4].color = sf::Color::White;
        right[pos * 14 - 3].color = sf::Color::White;
        right[pos * 14 - 2].color = sf::Color::White;
        right[pos * 14 - 1].color = sf::Color::White;
        break;
    }
    }
}
int main()
{
    std::string codes[50];
    std::string numbers;
    int i = 0;
    int n = 0;
    int lastdgt = 0;
    bool q = false;
    bool w = false;
    bool e = false;
    bool r = false;
    bool t = false;
    bool y = false;
    sf::RenderWindow window(sf::VideoMode(301, 170), "EAN-13 Codes");
    sf::VertexArray start(sf::Lines, 4);
    start[0].position = sf::Vector2f(104, 60);
    start[1].position = sf::Vector2f(104, 145);
    start[2].position = sf::Vector2f(106, 60);
    start[3].position = sf::Vector2f(106, 145);
    start[0].color = sf::Color::Black;
    start[1].color = sf::Color::Black;
    start[2].color = sf::Color::Black;
    start[3].color = sf::Color::Black;
    sf::VertexArray middle(sf::Lines, 4);
    middle[0].position = sf::Vector2f(150, 60);
    middle[1].position = sf::Vector2f(150, 145);
    middle[2].position = sf::Vector2f(152, 60);
    middle[3].position = sf::Vector2f(152, 145);
    middle[0].color = sf::Color::Black;
    middle[1].color = sf::Color::Black;
    middle[2].color = sf::Color::Black;
    middle[3].color = sf::Color::Black;
    sf::VertexArray end(sf::Lines, 4);
    end[0].position = sf::Vector2f(196, 60);
    end[1].position = sf::Vector2f(196, 145);
    end[2].position = sf::Vector2f(198, 60);
    end[3].position = sf::Vector2f(198, 145);
    end[0].color = sf::Color::Black;
    end[1].color = sf::Color::Black;
    end[2].color = sf::Color::Black;
    end[3].color = sf::Color::Black;
    sf::RectangleShape lineright(sf::Vector2f(95, 5));
    lineright.setPosition(208, 60);
    lineright.setFillColor(sf::Color::Green);
    lineright.setRotation(90);
    sf::RectangleShape lineleft(sf::Vector2f(95, 5));
    lineleft.setPosition(89, 60);
    lineleft.setFillColor(sf::Color::Green);
    lineleft.setRotation(90);
    sf::RectangleShape linetop(sf::Vector2f(5, 124));
    linetop.setPosition(84, 60);
    linetop.setFillColor(sf::Color::Green);
    linetop.setRotation(270);
    sf::RectangleShape linebot(sf::Vector2f(5, 119));
    linebot.setPosition(89, 155);
    linebot.setFillColor(sf::Color::Green);
    linebot.setRotation(270);
    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text number;
    number.setFont(font);
    number.setPosition(111, 5);
    number.setCharacterSize(30);
    number.setFillColor(sf::Color::Black);
    sf::Text digit;
    digit.setFont(font);
    digit.setPosition(90, 130);
    digit.setString("8");
    digit.setCharacterSize(13);
    digit.setFillColor(sf::Color::Black);
    sf::Text first;
    first.setFont(font);
    first.setPosition(106, 130);
    first.setString("152786");
    first.setCharacterSize(13);
    first.setFillColor(sf::Color::Black);
    sf::Text second;
    second.setFont(font);
    second.setPosition(153, 130);
    second.setString("745269");
    second.setCharacterSize(13);
    second.setFillColor(sf::Color::Black);
    sf::Texture nexttext;
    nexttext.loadFromFile("Next.png");
    sf::Sprite nextbut;
    nextbut.setPosition(201, 0);
    nextbut.setTexture(nexttext);
    sf::Texture prevtext;
    prevtext.loadFromFile("Prev.png");
    sf::Sprite prevbut;
    prevbut.setPosition(0, 0);
    prevbut.setTexture(prevtext);
    
    int z = 0;
    while (z < 84)
    {
        left[z].position = sf::Vector2f(107+z/2, 60);
        left[z+1].position = sf::Vector2f(107+z/2, 125);
        left[z].color = sf::Color::Black;
        left[z+1].color = sf::Color::Black;
        z = z + 2;
    }
    
    z = 0;
    while (z < 84)
    {
        right[z].position = sf::Vector2f(154 + z / 2, 60);
        right[z + 1].position = sf::Vector2f(154 + z / 2, 125);
        right[z].color = sf::Color::Black;
        right[z+1].color = sf::Color::Black;
        z = z + 2;
    }
    std::ifstream file("EAN13_CODES.txt");
    while (!file.eof())
    {
        file >> codes[i];
        i++;        
        if (i == 50)
        {
            return 0;
        }
    }
    i--;
    file.close();
    numbers = std::to_string(n) + "/" + std::to_string(i);
    number.setString(numbers);

    if (codes[n].length() == 12)
    {
        lastdgt = 10 - ((codes[n][1] + codes[n][3] + codes[n][5] + codes[n][7] + codes[n][9] + codes[n][11] - 288) * 3 + (codes[n][0] + codes[n][2] + codes[n][4] + codes[n][6] + codes[n][8] + codes[n][10] - 288)) % 10;
        if (lastdgt == 10)
            lastdgt = 0;
        switch (codes[n][0] - 48)
        {
        case 0:
        {q = 1; w = 1; e = 1; r = 1; t = 1; y = 1; break; }
        case 1:
        {q = 1; w = 1; e = 0; r = 1; t = 0; y = 0; break; }
        case 2:
        {q = 1; w = 1; e = 0; r = 0; t = 1; y = 0; break; }
        case 3:
        {q = 1; w = 1; e = 0; r = 0; t = 0; y = 1; break; }
        case 4:
        {q = 1; w = 0; e = 1; r = 1; t = 0; y = 0; break; }
        case 5:
        {q = 1; w = 0; e = 0; r = 1; t = 1; y = 0; break; }
        case 6:
        {q = 1; w = 0; e = 0; r = 0; t = 1; y = 1; break; }
        case 7:
        {q = 1; w = 0; e = 1; r = 0; t = 1; y = 0; break; }
        case 8:
        {q = 1; w = 0; e = 1; r = 0; t = 0; y = 1; break; }
        case 9:
        {q = 1; w = 0; e = 0; r = 1; t = 0; y = 1; break; }
        }
        if (q)
        {
            lcode(1, codes[n][1] - 48);
        }
        else
        {
            gcode(1, codes[n][1] - 48);
        }
        if (w)
        {
            lcode(2, codes[n][2] - 48);
        }
        else
        {
            gcode(2, codes[n][2] - 48);
        }
        if (e)
        {
            lcode(3, codes[n][3] - 48);
        }
        else
        {
            gcode(3, codes[n][3] - 48);
        }
        if (r)
        {
            lcode(4, codes[n][4] - 48);
        }
        else
        {
            gcode(4, codes[n][4] - 48);
        }
        if (t)
        {
            lcode(5, codes[n][5] - 48);
        }
        else
        {
            gcode(5, codes[n][5] - 48);
        }
        if (y)
        {
            lcode(6, codes[n][6] - 48);
        }
        else
        {
            gcode(6, codes[n][6] - 48);
        }
        rcode(1, codes[n][7] - 48);
        rcode(2, codes[n][8] - 48);
        rcode(3, codes[n][9] - 48);
        rcode(4, codes[n][10] - 48);
        rcode(5, codes[n][11] - 48);
        rcode(6, lastdgt);
        digit.setString(codes[n][0]);
        int x = (codes[n][1] - 48) * 100000 + (codes[n][2] - 48) * 10000 + (codes[n][3] - 48) * 1000 + (codes[n][4] - 48) * 100 + (codes[n][5] - 48) * 10 + (codes[n][6] - 48);
        first.setString(std::to_string(x));
        int c = (codes[n][7] - 48) * 100000 + (codes[n][8] - 48) * 10000 + (codes[n][9] - 48) * 1000 + (codes[n][10] - 48) * 100 + (codes[n][11] - 48) * 10 + (lastdgt);
        second.setString(std::to_string(c));
    }
    else
    {
        for (int i = 0; i < 84; i++)
        {
            left[i].color = sf::Color::White;
            right[i].color = sf::Color::White;
            digit.setString("!");
            first.setString("Wrong");
            second.setString("Code");
        }
    }
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if (event.type == sf::Event::MouseButtonPressed)
            {
                sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
                if (nextbut.getGlobalBounds().contains(mousePosF))
                {
                    if (n < i)
                    {n++;}
                    else
                    {n = 0;}
                    numbers = std::to_string(n) + "/" + std::to_string(i);
                    number.setString(numbers);
                }
                if (prevbut.getGlobalBounds().contains(mousePosF))
                {
                    if (n > 0)
                    {n--;}
                    else
                    {n = i;}
                    numbers = std::to_string(n) + "/" + std::to_string(i);
                    number.setString(numbers);
                }
                if (codes[n].length() == 12)
                {
                    lastdgt = 10 - ((codes[n][1] + codes[n][3] + codes[n][5] + codes[n][7] + codes[n][9] + codes[n][11] - 288) * 3 + (codes[n][0] + codes[n][2] + codes[n][4] + codes[n][6] + codes[n][8] + codes[n][10] - 288)) % 10;
                    if (lastdgt == 10)
                        lastdgt = 0;
                        switch (codes[n][0] - 48)
                        {
                        case 0:
                        {q = 1; w = 1; e = 1; r = 1; t = 1; y = 1; break;}
                        case 1:
                        {q = 1; w = 1; e = 0; r = 1; t = 0; y = 0; break;}
                        case 2:
                        {q = 1; w = 1; e = 0; r = 0; t = 1; y = 0; break;}
                        case 3:
                        {q = 1; w = 1; e = 0; r = 0; t = 0; y = 1; break;}
                        case 4:
                        {q = 1; w = 0; e = 1; r = 1; t = 0; y = 0; break;}
                        case 5:
                        {q = 1; w = 0; e = 0; r = 1; t = 1; y = 0; break;}
                        case 6:
                        {q = 1; w = 0; e = 0; r = 0; t = 1; y = 1; break;}
                        case 7:
                        {q = 1; w = 0; e = 1; r = 0; t = 1; y = 0; break;}
                        case 8:
                        {q = 1; w = 0; e = 1; r = 0; t = 0; y = 1; break;}
                        case 9:
                        {q = 1; w = 0; e = 0; r = 1; t = 0; y = 1; break;}
                        }
                        if (q)
                        {lcode(1, codes[n][1] - 48);}
                        else
                        {gcode(1, codes[n][1] - 48);}
                        if (w)
                        {lcode(2, codes[n][2] - 48);}
                        else
                        {gcode(2, codes[n][2] - 48);}
                        if (e)
                        {lcode(3, codes[n][3] - 48);}
                        else
                        {gcode(3, codes[n][3] - 48);}
                        if (r)
                        {lcode(4, codes[n][4] - 48);}
                        else
                        {gcode(4, codes[n][4] - 48);}
                        if (t)
                        {lcode(5, codes[n][5] - 48);}
                        else
                        {gcode(5, codes[n][5] - 48);}
                        if (y)
                        {lcode(6, codes[n][6] - 48);}
                        else
                        {gcode(6, codes[n][6] - 48);}
                        rcode(1, codes[n][7] - 48);
                        rcode(2, codes[n][8] - 48);
                        rcode(3, codes[n][9] - 48);
                        rcode(4, codes[n][10] - 48);
                        rcode(5, codes[n][11] - 48);
                        rcode(6, lastdgt);
                        digit.setString(codes[n][0]);
                        int x = (codes[n][1]-48)*100000 + (codes[n][2]-48)*10000 + (codes[n][3]-48)*1000 + (codes[n][4]-48)*100 + (codes[n][5]-48)*10 + (codes[n][6]-48);
                        first.setString(std::to_string(x));
                        int c = (codes[n][7] - 48) * 100000 + (codes[n][8] - 48) * 10000 + (codes[n][9] - 48) * 1000 + (codes[n][10] - 48) * 100 + (codes[n][11] - 48) * 10 + (lastdgt);
                        second.setString(std::to_string(c));
                }
                else
                {
                    for (int i = 0; i < 84; i++)
                    {
                        left[i].color = sf::Color::White;
                        right[i].color = sf::Color::White;
                        digit.setString("!");
                        first.setString("Wrong");
                        second.setString("Code");
                    }
                }
            }
        }
        window.clear(sf::Color::White);
        window.draw(nextbut);
        window.draw(prevbut);
        window.draw(start);
        window.draw(left);
        window.draw(middle);
        window.draw(right);
        window.draw(end);
        window.draw(lineright);
        window.draw(linetop);
        window.draw(lineleft);
        window.draw(linebot);
        window.draw(digit);
        window.draw(first);
        window.draw(second);
        window.draw(number);
        window.display();
    }
    return 0;
}