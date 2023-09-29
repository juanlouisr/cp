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

int solution(vector<int> &X) {
    int res = 0;
    if (X.size() <= 1)
    {
        return 0;
    }
    sort(X.begin(), X.end());
    int lebar;
    for (size_t i = 0; i < X.size()-1; i++)
    {
        lebar = X[i+1] - X[i];
        res = max(res, lebar);
    }
    return res;
    
}


int main() 
{
    fast;
    

    return 0;
}