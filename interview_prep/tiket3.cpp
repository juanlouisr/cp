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

int solution(int N) {
    string s = to_string(N);
    if (N >= 0) 
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] - '0' < 5)
            {
                return stoi(s.substr(0,i) + "5" + s.substr(i, s.size() - i));
            }
        }
        return stoi(s + "5");
    }
    else 
    {
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] - '0' > 5)
            {
                return stoi(s.substr(0,i) + "5" + s.substr(i, s.size() - i));
            }
        }
        return stoi(s + "5");
    }
}


int main() 
{
    fast;
    cout << solution(0) << endl;
    cout << solution(268) << endl;
    cout << solution(670) << endl;
    cout << solution(679) << endl;
    cout << solution(-999) << endl;
    cout << solution(-1) << endl;
    cout << solution(-4) << endl;
    cout << solution(-54) << endl;
    cout << solution(-6) << endl;

    return 0;
}