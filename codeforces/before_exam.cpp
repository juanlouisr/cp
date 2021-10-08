#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() 
{
    int n, sum, sumbig = 0; 
    vector<int> mins;
    vector<int> maxs;
    cin >> n >> sum;
    for (int i = 0; i < n; i++)
    {
        int s, b;
        cin >> s >> b;
        mins.push_back(s);
        maxs.push_back(b);
        sumbig += b;
    }
    if (sumbig < sum)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        int sum2 = 0;
        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > 0) cout << " ";
            sum2 += maxs[i];
        
            if (sum > sum2)
            {
                curr+=maxs[i];
                cout << maxs[i];
            }
            else 
            {  
                int need = sum - curr;
                if (mins[i] <= need && need <= maxs[i])
                {
                    curr += need;
                    cout << need;
                }
                else if (need <= 0)
                {
                    cout << 0;
                }
            }

        }
        cout << "\n";
    }

    return 0;
}