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

struct CompareXY {
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
        // Compare based on the condition x1 > x2 and y1 > y2
        return p1.first < p2.first && p1.second < p2.second; 
    }
};

int main() {
    fast;
    priority_queue<pair<int, int>, vector<pair<int, int>>, CompareXY> minHeap;
    int N

    // Insert elements into the priority queue
    minHeap.push({5, 3});
    minHeap.push({5, 4});

    minHeap.push({2, 4});
    minHeap.push({6, 2});
    minHeap.push({7, 1});

    // Retrieve and print elements in ascending order of priority
    while (!minHeap.empty()) {
        std::pair<int, int> topElement = minHeap.top();
        minHeap.pop();
        std::cout << "(" << topElement.first << ", " << topElement.second << ") ";
    }

    return 0;
}
