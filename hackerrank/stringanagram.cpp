#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> stringAnagram(vector<string> dictionary, vector<string> query) {
    vector<int> ans;
    
    vector<vector<int>> chardict;
    for (int i = 0; dictionary.size(); i++) {
        vector<int> chars(26);
        for (char c: dictionary[i])
        {
            cout << "masuk\n";
            chars[c - 97]++;
            cout << c << endl;
            cout << "keluar\n";
        }
        chardict.push_back(chars);
    }
    cout << "test\n";

    vector<vector<int>> querydict;
    for (int i = 0; query.size(); i++) {
        vector<int> chars(26);
        for (char c: query[i])
        {
            chars[c - 97]++;
        }
        querydict.push_back(chars);
    }

    
    for (int i = 0 ; querydict.size(); i++) {
        int count = 0;
        for (int j = 0; chardict.size();j++) {
            if (querydict[i] == chardict[j])
            {
                count++;
            }
        }
        
        ans.push_back(count);
    }
    return ans;
}

int main() 
{
    vector<string> dict({"heater",
                        "cold",
                        "clod",
                        "reheat",
                        "docl"});

    vector<string> query({"codl",
                        "heater",
                        "abcd"});


    auto ans = stringAnagram(dict, query);

    for (auto i : ans)
    {
        cout << i << endl;
    }

    return 0;
}