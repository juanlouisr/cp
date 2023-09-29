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

int solution(vector<int> &A) {
    int n = A.size();
    unordered_set<int> hashSet;
    for (int a : A)
    {
        hashSet.insert(a);
    }
    for (size_t i = 1; i <= hashSet.size(); i++)
    {
        if (hashSet.find(i) == hashSet.end())
        {
            return i;
        }
    }
    return n+1;
}

int main() 
{
    fast;
    

    return 0;
}