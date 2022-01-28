#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define sc ;
#define TC ll tc sc cin >> tc sc while(tc--)
#define forto(var,up) for(ll(var)=0;(var)<(up);(var)++)
#define all(arr) (arr).begin(), (arr).end()
#define fast\
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> base;
        vector<int> base2;

        base.push_back(1);
        ans.push_back(base);
        

        for (size_t i = 1; i < numRows; i++)
        {
            vector<int> prevRow = ans[i-1];
            vector<int> row;
            row.push_back(1);
            for (size_t j = 1; j < i; j++)
            {
                row.push_back(prevRow[j-1] + prevRow[j]);                    
            }
            row.push_back(1);
            ans.push_back(row);  
        }
    

        return ans;
        
    }


};


int main() 
{
    

    return 0;
}