#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast\
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

int main() 
{
    fast;
    int TC;
    cin >> TC;
    for (size_t i = 0; i < TC; i++)
    {
        int A,B,C,D;
        int count = 1;

        cin >> A >> B >> C >> D;

        int sum = A + B + C;
        if (sum <= D)
            cout << count << "\n";
        else
        {
            count = (int) ceil((double) (A+B) / (double) D) + ceil((double) C / (double)D);
            cout << count << "\n";
        }


    }
    

    return 0;
}