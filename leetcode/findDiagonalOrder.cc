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
    cin.tie(NULL)

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    vector<int> ans;
    int i = 0, j = 0;
    int dirX = 1;
    int dirY = -1;

    while (i < mat.size() && j < mat[0].size())
    {
        ans.push_back(mat[i][j]);
        if (i == mat.size()-1 && j == mat[0].size()-1) 
        {
            break;
        }
        j += dirX;
        i += dirY;
        if (j < 0 || i < 0 || i >= mat.size() || j >= mat[0].size())
        {
            dirX *= -1;
            dirY *= -1;
        }
        if (i < 0)
        {
            i++;
        }
        else if (j < 0)
        {
            j++;
        }
        else if (i >= mat.size())
        {
            j++;
        }
        else if (j >= mat[0].size())
        {
            i++;
        }
        if (i >= mat.size() || j >= mat[0].size())
        {
            j += dirX;
            i += dirY;
        }
    }

    return ans;
}

int main() 
{
    fast;
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    findDiagonalOrder(mat);

    return 0;
}