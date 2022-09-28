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

string containLetter(string let1, string let2)
{
    unordered_map<char, bool> definisi;

    for (char c : let2)
    {
        if ('A' <= c && c <= 'Z') 
        {
            c += 'a' - 'A';
        }
        if (definisi.find(c) == definisi.end())
        {
            definisi[c] = true;
        }
    }
    for (auto c : let1)
    {
        if (definisi.find(c) == definisi.end())
        {
            return "false";
        }
    }
    return "true";
}


int main() 
{
    fast;
    cout << containLetter("cat", "antarctica") << endl;
    cout << containLetter("cat", "australia") << endl;
    cout << containLetter("cat", "ANTARCTICA") << endl;

    return 0;
}