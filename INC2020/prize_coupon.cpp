#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() 
{
    int N;
    cin >> N;
    vector<int> have(N);
    int count = 0;
    int temp;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        if (i>0 && !have[i-1] && temp)
            have[i-1]++, count++, temp--;
        if (!have[i] && temp)
            have[i]++, count++, temp--;
        if (i<N-1 && !have[i+1] && temp)
            have[i+1]++, count++, temp--;        

    }
    
    cout << count << '\n';
    return 0;
}