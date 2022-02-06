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


ll maxSumSubArray(vector<ll> arr)
{
    ll maxi = arr[0], currMax = arr[0];
    for (ll i = 1; i < size(arr); i++)
    {
        currMax = max(arr[i], currMax + arr[i]);
        maxi  = max(currMax, maxi);
    }
    return maxi;
}

void solve()
{
    ll n,temp;
    vector<ll> x;
    cin >> n;
    forto(i,n)
    {
        cin >> temp;
        x.push_back(temp);
    }
    cout << maxSumSubArray(x);
}

int main() 
{
    fast;
    solve();

    return 0;
}