#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast\
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

int nonDivisibleSubset(int k, vector<int> s) {
    int max = 0;
    for (int i= 0; i < s.size(); i++) {
        vector<int> arr;
        arr.push_back(s[i]);
        for (int j = i + 1; j < i + s.size(); j++) {
            int curr = j % s.size();
            bool found = false;
            for (int l = 0; l < arr.size(); l++) {
                if ( (arr[l]+s[curr]) % k == 0)
                {
                    found = true;
                    break;
                }
            }
            if (!found) arr.push_back(s[curr]);
        }
        // return arr.size();
        if (max < arr.size())
        {
            max = arr.size();
        }
    }
    
    return max;
}

int main() 
{
    fast;

    return 0;
}