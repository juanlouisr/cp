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


void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int> arr;
    forto(i,n)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    unordered_map<int, int> prevSum;
    int ans = 0;
    int currsum = 0;
    forto(i,n)
    {
        currsum += arr[i];
        if (currsum == k)
        {
            ans++;
        }
        if (prevSum.find(currsum - k) != prevSum.end())
        {
            ans += (prevSum[currsum - k]);
        }
        prevSum[currsum]++;
    }
    cout << ans;
}

int main() 
{
    fast;
    solve();

    return 0;
}