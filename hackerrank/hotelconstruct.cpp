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

class Relation
{
    public:
        int value;
        set<int> friends;
        
        void addFriend(int val)
        {
            friends.insert(val);
        }

        Relation(int val)
        {
            value = val;
        }
};

int numberOfWays(vector<vector<int>> roads) {
    
}

int main() 
{
    

    return 0;
}