#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast\
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

long binpow(long a, long b) {
    if (b == 0)
        return 1;
    long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

long digitremo(long digit, int D)
{
    if (digit < 10)
    {
        if (digit != D)
            return 0;
        return 1;
    }
    string str = to_string(digit);
    int firstFound = -1;
    vector<int> indexes;
    // char toFind = D - '0';
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] - '0'== D)
        {
            firstFound = i;
            indexes.push_back(i);
        }
    }
    if (firstFound == -1)
    {
        return 0;
    }
    if (firstFound == str.size() -1)
    {
        return 1;
    }
    if (D != 0)
    {
        str[firstFound]++;
        for (size_t i = firstFound + 1; i < str.size(); i++)
        {
            str[i] = '0';
        }
        return stol(str) - digit;
    }
    else
    {
        long sum = 0;
        for (int i = str.size()-1; i>=0; i--)
        {
            if (str[i] == '0')
            {
                cout << "halo\n";
                sum += 1 * binpow(10, str.size()-1-i);
            }
        }
        return sum;
    }
    return -1;
}

int main() 
{
    fast;
    int N;
    cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        long digit; int D;
        cin >> digit >> D;
        cout << digitremo(digit, D) << "\n";
    }


    return 0;
}