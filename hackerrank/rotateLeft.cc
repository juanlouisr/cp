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

vector<int> rotateLeft(int d, vector<int> arr) {
    for (size_t i = 0; i < d; i++)
    {
        arr.push_back(arr[i]);
    }
    arr.erase(arr.begin(), arr.begin() + d);
    
    return arr;
}

int main() 
{
    fast;
    rotateLeft(4, {1,2,3,4,5});

    return 0;
}