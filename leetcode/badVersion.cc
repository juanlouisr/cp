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

bool isBadVersion(int version) {
    if (version >= 2) {
        return true;
    }
    return false;
}
//  1 - 2
//  1 - 2
//  2 - 5
//  3 - 5
//  3 - 4
//  
// 

int firstBadVersionHelper(int low, int high) {

    if (low >= high) {
        return high;
    }
    long long mid = (low + high) / 2;
    if (isBadVersion(mid)) {
        return firstBadVersionHelper(low, mid);
    }
    return firstBadVersionHelper(mid+1, high);
}

int firstBadVersion(int n) {
   return firstBadVersionHelper(1, n);
}


int main() 
{
    // fast;
    cout << firstBadVersion(2);
    cout << firstBadVersion(3);
    cout << firstBadVersion(4);

    return 0;
}