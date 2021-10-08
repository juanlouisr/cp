#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int maxScore(vector<int> a, int m) {

    sort(a.begin(), a.end());
    ll sum = 0;
    int n = 0;
    for (size_t i = 0; i <= a.size() - m; i += m)
    {
        ll temp = 0;
        for (size_t j = i; j < i + m && j < a.size(); j++)
        {
            temp += a[j];
        }
        temp *= ++n;
        sum += temp;
    }
    ll temp = 0;
    for (int j = a.size() - a.size() % m; j < a.size(); j++)
    {
        temp += a[j];
    }
    temp *= n;
    sum +=  temp;

    return sum % mod;
}


int main() 
{
    

    return 0;
}