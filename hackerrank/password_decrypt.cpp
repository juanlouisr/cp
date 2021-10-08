#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

string decryptPassword(string s) {
    stack<char> num;
    for (char c: s)
    {
        if ('1' <= c && c <= '9')
        {
            num.push(c);
        }
        else {
            break;
        }
    }
    s = s.substr(num.size(), s.size()-num.size());
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = num.top();
            num.pop();
        }
        if (s[i] == '*')
        {
            char temp = s[i-1];
            s[i-1] = s[i-2];
            s[i-2] = temp;
        }
    }
    s.erase(remove(s.begin(), s.end(), '*'), s.end());
    return s;
}

int main() 
{
    

    return 0;
}