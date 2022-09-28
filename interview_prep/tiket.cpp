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
    unordered_map<int, bool> kamus;
    for (auto a : A) {
        kamus[a] = true;
    }
    for (size_t i = 1; i < 100000+5; i++)
    {
        if (kamus.find(i) == kamus.end())
        {
            return i;
        }
    }
    return 100000;
}


int main() 
{
    fast;
    

    return 0;
}