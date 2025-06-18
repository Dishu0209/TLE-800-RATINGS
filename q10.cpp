#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, t1;
    cin >> t;
    t1 = t;
    vector<int> out;
    while (t--)
    {
        int i, j;
        
        vector<string> v(10);
        int score = 0;
        for (j = 0; j < 10; j++)
        {
            cin >> v[j];
        }
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j< 10; j++)
            {
                if (i == 0 || j == 0 || i == 9 || j == 9)
                {
                    if (v[i][j] == 'X')
                        score = score + 1;
                }
                else if ((j == 1) || (j == 8) || i == 1 || i == 8)
                {
                    if (v[i][j] == 'X')
                        score = score + 2;
                }
                else if (j == 2 || j == 7 || i == 2 || i == 7)
                {
                    if (v[i][j] == 'X')
                        score = score + 3;
                }
                else if (j == 3 || j == 6 || i == 3 || i == 6)
                {
                    if (v[i][j] == 'X')
                        score = score + 4;
                }
                else
                {
                    if (v[i][j] == 'X')
                    score = score + 5;
                }
            }
        }
        out.push_back(score);
    }
    for (int i = 0; i < t1; i++)
    {
        cout << out[i] << endl;
    }
    return 0;
}