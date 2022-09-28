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

int solution(vector<int> &A) {
    int n = A.size();
    int head1Cor = 0;
    int head0Cor = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (A[i] == 1) 
            {
                head1Cor++;
            }
            else
            {
                head0Cor++;
            }
        } 
        else
        {
            if (A[i] == 0) 
            {
                head1Cor++;
            }
            else
            {
                head0Cor++;
            }
        }
    }
    if (head0Cor > head1Cor) 
    {
        return n - head0Cor;
    }
    return n - head1Cor;
}
