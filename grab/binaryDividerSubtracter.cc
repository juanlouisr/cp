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

long long convert(string &s) 
{
    long long sum = 0;
    int pangkat = 0;
    for (int i = s.size()-1; i >=0; i--)
    {
        sum += (s[i] - '0') * pow(2, pangkat++);
    }
    return sum;
}

void removeLeadingZero(string &S)
{
    int idx = 0;
    for (size_t i = 0; i < S.size(); i++)
    {
        if (S[i] == '0')
        {
            idx++;
        }
        else
        {
            break;
        }
    }
    if (idx)
    {
        S = S.substr(idx);
    }
}

int solutionOptimum(string &s)
{
    int idx = 0;
    while (s[idx] == '0')
    {
        idx++;
    }
    int zeroCounter = 0;
    for (int i = idx; i < s.size(); i++)
    {
        zeroCounter += (s[i] == '0');
    }
    if (idx == s.size()) 
    {
        return 0;
    }
    return zeroCounter - 1 + (s.size() - idx - zeroCounter) * 2; 
    
}

int solution(string &S)
{
    int operations = 0;
    removeLeadingZero(S);
    while (S != "" && S != "0") {
        if (S.back() == '0') {
            S.pop_back();
        } else {
           S[S.size()-1] = '0';
        }
        operations++;
    }
    return operations;
}



int main() 
{
    fast;
    string s = "00000000010";
    cout << solutionOptimum(s);

    return 0;
}