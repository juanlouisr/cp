#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() 
{
    
    int prob;
    cin >> prob;
    unordered_map<string, int> data;
    for (size_t i = 0; i < prob; i++)
    {
        string user;
        cin >> user;
        auto got = data.find(user);

        if (got == data.end())
        {
            cout << "OK\n";
            data.insert({user, 1});
        }
        else
        {
            cout << user;
            cout << got->second++ << "\n";
        }
    }
    

    return 0;
}