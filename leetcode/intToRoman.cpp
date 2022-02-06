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

class Solution {
public:
    string intToRoman(int num) {
        map<int, string> values(
        {
            {1000,"M"},
            {900,"CM"},
            {500,"D"},
            {400,"CD"},
            {100,"C"},
            {90,"XC"},
            {50,"L"},
            {40,"XL"},
            {10,"X"},
            {9,"IX"},
            {5,"V"},
            {4,"IV"},
            {1,"I"}
        });
        string str = "";
        while (num) {
            for (auto val = values.rbegin(); val != values.rend(); val++)
            {
                if (num >= val->first)
                {
                    str += val->second;
                    num -= val->first;
                    break;
                }
            }
        }
        return str;
    }
    
};

int main() 
{
    fast;
    

    return 0;
}