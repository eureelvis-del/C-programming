#include <bits/stdc++.h>
using namespace std;
int main()
{
    int chain[3][5][10];
    srand(time(0));
    int total = 0;

    for (int b = 0; b < 3; b++)
        for (int f = 0; f < 5; f++)
            for (int r = 0; r < 10; r++)
            {
                chain[b][f][r] = rand() % 2;
                total += chain[b][f][r];
            }

    cout << "Total occupied rooms across all branches: " << total << endl;
}