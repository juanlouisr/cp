#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define sc ;
#define TC ll tc sc cin >> tc sc while(tc--)



bool isPalindromeStack(string s) {

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    stack<char> stek;
    vector<char> slist;
    for (size_t i = 0; i < s.size(); i++)
    {
        if ('a' <= s[i] && s[i] <= 'z' || isdigit(s[i]) )
        {
            slist.push_back(s[i]);
        }
    }

    int len = slist.size();

    for (size_t i = 0; i < len/2; i++)
    {
        stek.push(slist[i]);
    }
    
    int mid = len % 2 == 0? len/2 : len/2+1;

    for (size_t i = mid; i < len; i++)
    {
        char c = stek.top();
        stek.pop();
        if (c != slist[i])
        {  
            return false;
        }
    }
    
    return true;

}

bool isPalindrome(string s) {

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    vector<char> slist;
    for (size_t i = 0; i < s.size(); i++)
    {
        if ('a' <= s[i] && s[i] <= 'z' || isdigit(s[i]) )
        {
            slist.push_back(s[i]);
        }
    }

    int left = 0;
    int right = slist.size() - 1;

    while (left < right)
    {
        if (slist[left++] != slist[right--])
        {
            return false;
        }
    }
    
    return true;
}


int main() 
{
    string inp;

    getline(cin, inp);

    cout << isPalindrome(inp);

    return 0;
}