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

char slowestKey(vector<vector<int>> keyTimes) {
    int idx = 0, maxVal = keyTimes[0][1];
    for (int i = 1; i < keyTimes.size(); i++)
    {
        if (keyTimes[i][1] - keyTimes[i-1][1]> maxVal)
        {
            idx = i;
            maxVal = keyTimes[i][1] - keyTimes[i-1][1];
        }
    }

    return keyTimes[idx][0] + 'a'; 
}

int main() 
{
    fast;
    

    return 0;
}