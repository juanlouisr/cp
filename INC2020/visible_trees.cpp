#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() 
{
    int N;
    cin >> N;
    vector<vector<int>> trees(N);
    for (size_t i = 0; i < N; i++)
    {
        vector<int> tree(N);
        for (size_t j = 0; j < N; j++)
        {
            cin >> tree[j];
        }
        trees[i] = tree;
    }
    vector<int> countsCol(N);
    vector<int> countsRow(N);
    for (size_t i = 0; i < N; i++)
    {
        int maxcol = 0;
        int maxrow = 0;
        int countcol = 0;
        int countrow = 0;
        for (size_t j = 0; j < N; j++)
        {
            if (trees[j][i] > maxcol)
            {
                maxcol = trees[j][i];
                countcol++;
            }

            if (trees[i][j] > maxrow)
            {
                maxrow = trees[i][j];
                countrow++;
            }
        }
        countsCol[i] = countcol;
        countsRow[i] = countrow;
    }

    for (size_t i = 0; i < N; i++)
    {
        if (i > 0) cout << " ";
        cout << countsCol[i];
    }
    cout << endl;
    for (size_t i = 0; i < N; i++)
    {
        if (i > 0) cout << "\n";
        cout << countsRow[i];
    }
    
    


    return 0;
}