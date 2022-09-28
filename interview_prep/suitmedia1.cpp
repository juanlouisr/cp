#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define sc ;
#define TC ll tc sc cin >> tc sc while(tc--)
#define forto(var,up) for(ll(var)=0;(var)<(up);(var)++)
#define all(arr) (arr).begin(), (arr).end()
// #define fast\
//     ios::sync_with_stdio(false); \
//     cin.tie(NULL)

void teka_teki_teko(unsigned int num)
{
	if (num < 20)
	{
        throw invalid_argument("num must be greater than 20");
	}
	for (size_t i = 1; i <= num; i++)
	{
		bool teka = (i % 2 == 0), teki = (i % 3 == 0), teko = (i % 5 == 0);
		if (teka)
		{
			cout << "Teka";
		}
        if (teki)
        {
            cout << "Teki";
        }
        if (teko)
        {
            cout << "Teko";
        }
        if (!teka && !teki && !teko)
        {
            cout << i;
        }
        cout << '\n';
	}
       
}

int main() 
{
    // fast;
    try
    {
        teka_teki_teko(30);
        teka_teki_teko(19);
    }
    catch(const invalid_argument& e)
    {
        cerr << e.what() << '\n';
    }
    

    return 0;
}