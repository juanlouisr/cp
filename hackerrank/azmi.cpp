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
    cin.tie(NULL);

string simpleCipher(const char* str, int n,int k)
{
    string out = "";

    for (size_t i = 0; i < n; i++)
    {
        out += str[i] - k;
    }


    return out;
}

int main() 
{
    cout << simpleCipher("CDEF", 4, 2);

    return 0;
}