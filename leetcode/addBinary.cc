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

string addBinary(string a, string b) {
    int idxA = a.size() - 1;
    int idxB = b.size() - 1;
    string res = "";
    bool leftOver = false;
    int addition;
    while (idxA >= 0 || idxB >= 0)
    {
        addition = leftOver;
        if (idxA >= 0) 
        {
            addition += a[idxA] - '0';
        }
        if (idxB >= 0)
        {
            addition += b[idxB] - '0';
        }
        leftOver = addition >= 2;
        res.insert(0, to_string(addition - 2 * leftOver));

        idxA--;
        idxB--;
    }
    if (leftOver)
    {
        res.insert(0, "1");
    }
    return res;
}

int main() 
{
    fast;
    cout << addBinary("1111", "11");

    return 0;
}