#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int main() 
{
    int T;
    cin >> T;
    for (size_t i = 0; i < T; i++)
    {
        int A, B;
        cin >> A >> B;
        if (A == 0)
            cout << "Liquid\n";
        else if (B == 0)
            cout << "Solid\n";
        else
            cout << "Solution\n";
    }
    

    return 0;
}