#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() 
{
    int N, M;
    cin >> N;
    vector<long> prices(N);
    vector<int> boughts(N);

    for (int i = 0; i < N; i++)
    {
        cin >> prices[i];
    }

    cin >> M;
    vector<long> budgets(M);
    for (int i = 0; i < M; i++)
    {
        cin >> budgets[i];
    }
    int count = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (budgets[i] >= prices[j])
            {
                if (boughts[j] == 0)
                {
                    prices[j] = budgets[i];
                    boughts[j]++;
                    count++;
                    break;
                }
                else
                {
                    if (budgets[i] > prices[j])
                    {
                        prices[j] = budgets[i];
                        break;
                    }
                }
                
            }
        }
        
    }


    cout << count;

    return 0;
}