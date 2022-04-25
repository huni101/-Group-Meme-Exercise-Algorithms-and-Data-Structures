#include <iostream>
#include <string>

void printTable(int r, int c, int w)
{
    std::string s;
    int space;

    for (int i = 0; i < r; ++i)
    {
        for (int k = 0; k < c; ++k)
        {
            std::cout << "+";

            for (int j = 0; j < w; ++j)
            {
                std::cout << "-";
            }
        }

        std::cout << "+" << std::endl;

        for (int k = 0; k < c; ++k)
        {
            std::cin >> s;
            space = (w - s.size()) / 2;
            std::cout << "|";

            for (int j = 0; j < space; ++j)
            {
                std::cout << " ";
            }

            std::cout << s;

            for (int j = 0; j < w - (int)s.size() - space; ++j)
            {
                std::cout << " ";
            }
        }

        std::cout << "|" << std::endl;
    }

    for (int k = 0; k < c; ++k)
    {
        std::cout << "+";

        for (int j = 0; j < w; ++j)
        {
            std::cout << "-";
        }
    }

    std::cout << "+" << std::endl;
}