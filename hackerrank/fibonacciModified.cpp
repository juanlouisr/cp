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


int fibonacciModified(int t1, int t2, int n) {
    int fib[20];
    fib[0] = t1;
    fib[1] = t2;
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i-1]*fib[i-1] + fib[i-2];
    }
    return fib[n-1]; 
}

int main() 
{
    

    return 0;
}