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

int solution(string &S) 
{
    unordered_map<char, int> counter;
    for (auto c : S)
    {
        counter[c]++;
    }

    vector<int> balon = { counter['B'],  counter['A'], (counter['L'] / 2), (counter['O'] / 2), counter['N'] };

    int min = balon[0];
    for (int i = 0; i < balon.size(); i++)
    {
        if (min > balon[i])
        {
            min = balon[i];
        }
    }
    
    return min;
}
