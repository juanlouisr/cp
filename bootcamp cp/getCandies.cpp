#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define sc ;
#define TC ll tc sc cin >> tc sc while(tc--)
#define forto(var,up) for(ll(var)=0;(var)<(up);(var)++)
#define all(arr) (arr).begin(), (arr).end()


void solve()
{
    ll low = 1;
    ll high = 1000000000;
    ll ans;
    
    int qc = 0;

    char in;
    do
    {
        ans = (high + low)/2;

        cout << "Q " << ans << "\n";
        cout.flush();
        qc++;

        cin >> in;
        if (in == '<')
        {
            high = ans - 1;
        }
        else if (in == '>')
        {
            low = ans + 1;
        }

    } while (in != '=' && qc <= 60);
 
}

int main() 
{
    solve();

    return 0;
}