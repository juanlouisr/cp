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

vector<int> partitionLabels(string s) {
    unordered_map<char, int> counter;
    for (char c : s)
    {
        counter[c]++;
    }
    vector<int> ans;
    int temp = 0;
    unordered_map<char, int> currentCounter;
    bool match;
    for (char c : s)
    {
        match = true;
        temp++;
        currentCounter[c]++;
        for (auto kv : currentCounter)
        {
            if (kv.second != counter[kv.first])
            {
                match = false;
                break;
            }
        }
        if (match)
        {
            ans.push_back(temp);
            temp = 0;
            currentCounter.clear();
        }
    }
    return ans;
}

int main() 
{
    fast;
    

    return 0;
}