#include <bits/stdc++.h>
using namespace std;
int main()
{
    int occupancy[5][10];
    srand(time(0));

    for (int f = 0; f < 5; f++)
        for (int r = 0; r < 10; r++)
            occupancy[f][r] = rand() % 2;

    for (int f = 0; f < 5; f++)
    {
        int occupied = 0, vacant = 0;
        for (int r = 0; r < 10; r++)
        {
            if (occupancy[f][r] == 1)
                occupied++;
            else
                vacant++;
        }
        cout << "Floor " << f + 1 << " -> Occupied: " << occupied << ", Vacant: " << vacant << endl;
    }
}