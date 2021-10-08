#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


vector<int> getMaxCharCount(string s, vector<vector<int>> queries) {
    // queries is a n x 2 array where queries[i][0] and queries[i][1] represents x[i] and y[i] for the ith query.
    std::vector<std::vector<size_t> > data(26, std::vector<size_t>(s.size() + 1));
    
    for (size_t i = 0; i < s.size(); i++)
    {
        if (65 <= s[i]  && s[i] <= 90)
        {
            s[i] += 32;
        }
        for (size_t j = 0; j < 26; j++)
		{
			data[j][i + 1] = data[j][i];
		}
        data[s[i] - 'a'][i+1]++;
    }

    vector<int> ans;
    for (size_t i = 0; i < queries.size(); i++)
    {
        int lb, ub;
        lb = queries[i][0];
        ub = queries[i][1];
        size_t jb = 0;
        for (size_t j = 26; j > 0; i--)
        {
            const size_t anst = data[j-1][ub+1] - data[j-1][lb];
            if (anst != 0)
            {
                jb = anst;
                ans.push_back(jb);
                break;
            }
        }  
    }
    return ans;
}


int main() 
{
    

    return 0;
}