#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

void coinChange(int* coinSupply, int arraySize, int value)
{
    int temp = value;
    int count[arraySize] = { 0 };
    int min = 0;

    for (int i = arraySize - 1; i >= 0; i--)
    {
        while (coinSupply[i] <= temp)
        {
            temp = temp - coinSupply[i];
            ++count[i];
            ++min;
        }
    }

    cout << "The minimum number of coin(s): " << min << endl;
    cout << "We need: " << endl;

    for (int i = 0; i < arraySize; i++)
    {
        cout << left << setw(5) << count[i] << setw(10) << "---->" << setw(5) << coinSupply[i] << " cent coin(s)" << endl;
    }
}

int main()
{
    int coinSupply[6];

    for (int i = 0; i < 6; ++i)
    {
        cin >> coinSupply[i];
    }
    int arraySize = sizeof(coinSupply) / sizeof(coinSupply[0]);

    coinChange(coinSupply, arraySize, 276);

    return 0;
}