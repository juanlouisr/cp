#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define sc ;
#define TC ll tc sc cin >> tc sc while(tc--)
#define forto(var,up) for(ll(var)=0;(var)<(up);(var)++)
#define all(arr) (arr).begin(), (arr).end()
#define fast\
    ios::sync_with_stdio(false); \
    cin.tie(NULL)

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int lowestPrice = prices[0];
    for (size_t i = 1; i < prices.size(); i++)
    {
        if (prices[i] < lowestPrice)
        {
            lowestPrice = prices[i];
        }
        else 
        {
            maxProfit = max(maxProfit, prices[i] - lowestPrice);
        }
    }
    return maxProfit;
}

int main() 
{
    fast;
    

    return 0;
}