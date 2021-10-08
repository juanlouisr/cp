#include <bits\stdc++.h>
#include <vector>

using namespace std;

// # input = [912, 92, 0, 1, 1, 3, 0, 7]
// # output = [912, 92, 3, 7, 0, 1, 1, 0]

vector<int> sort_order(vector<int> arr)
{
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0 || arr[i] == 1)
        {
            b.push_back(arr[i]);
        }
        else
        {
            a.push_back(arr[i]);
        }
    }

    a.insert(a.end(), b.begin(), b.end());
    return a;
}


int main(int argc, char const *argv[])
{
    vector<int> a({912, 92, 0, 1, 1, 3, 0, 7});
    vector<int> b;
    b = sort_order(a);
    for (int i : b)
    {
        cout << i << " " ;
    }


    return 0;
}
