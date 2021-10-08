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
class Solution {
public:
    int tribonacci(int n) {
        int arr[38];
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
        for (int i = 3 ; i < n+1; i++)
        {
            arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
        }
        return arr[n];
    }
};


int main() 
{
    

    return 0;
}