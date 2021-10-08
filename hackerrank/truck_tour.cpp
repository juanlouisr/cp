#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int truckTour(vector<vector<int>> petrolpumps) {
    int ans = 0;
    for (int i=0; i<petrolpumps.size(); i++) {
        long distance = petrolpumps[i][0] - petrolpumps[i][1];
        if (distance >= 0)
        {
            long tank = distance;
            bool found = true;
            for (size_t j = i+1; j < i+1 + petrolpumps.size(); j++) {
                size_t curr = j % petrolpumps.size();
                tank += petrolpumps[curr][0] - petrolpumps[curr][1];
                if (tank < 0)
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                ans = i;
                break;
            }
        }
    }
    return ans;
}


int main() 
{
    
    vector<int> apalah(5);

    for (int i:apalah)
    {
        cout << i << endl;
    }
    
    return 0;
}