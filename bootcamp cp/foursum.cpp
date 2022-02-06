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

vector<ll> fourSum(vector<ll> num, ll target) {
    sort(num.begin(),num.end());
    for (ll i = 0; i < size(num); i++) {
    
        ll target_3 = target - num[i];
    
        for (ll j = i + 1; j < size(num); j++) 
        {
            ll target_2 = target_3 - num[j];
            ll front = j + 1;
            ll back = size(num) - 1;
        
            while(front < back) 
            {
                ll two_sum = num[front] + num[back];
                if (two_sum < target_2) front++;
            
                else if (two_sum > target_2) back--;
            
                else 
                {
                    vector<ll> quadruple = {
                        num[i],num[j],num[front],num[back]
                    };
                    return quadruple;
                        
                }
            }

            while(j + 1 < size(num) && num[j + 1] == num[j]) ++j;
        }

        while (i + 1 < size(num) && num[i + 1] == num[i]) ++i;
    
    }
    return {};
}

void solve()
{
    unordered_map<ll, vector<ll>> pos;
    vector<ll> arr,ans;
    ll n,x,temp;
    cin >> n >> x;
    forto(i, n)
    {
        cin >> temp;
        arr.push_back(temp);
        if (pos.find(temp)==pos.end())
            pos[temp] = {i+1};
        else
        {
            pos[temp].push_back(i+1);
        }
    }
    ans = fourSum(arr, x);
    if (size(ans) == 0)
    {
        cout << -1;
    }
    else
    {
        unordered_map<ll, ll> counter;
        forto(i,size(ans))
        {
            if (counter.find(ans[i])==counter.end())
                counter[ans[i]] = 0;
            else
                counter[ans[i]]++;
            cout << pos[ans[i]][counter[ans[i]]] << " ";
        }
    }
}


int main() 
{
    fast;
    solve();

    return 0;
}