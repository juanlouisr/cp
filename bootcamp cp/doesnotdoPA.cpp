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
    ll n,s,temp1,temp2,sum;
    cin >> n >> s;
    
    auto cmp = [](pair<ll,ll> left, pair<ll,ll> right)
    {
        return left.first>right.first;
    };
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, decltype(cmp)> pq(cmp);
    
    forto(i, n)
    {
        cin >> temp1 >> temp2;
        pq.push({temp1,temp2});    
    }
    
    sum = 0; 
    while (!pq.empty())
    {
        sum += s + (pq.top().first - pq.top().second);
        s += pq.top().first;
        // cout << s << endl;
        pq.pop();
    }

    cout << sum;
}

int main() 
{
    fast;
    solve();

    return 0;
}