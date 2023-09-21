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

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    int n = intervals.size();
    int startIdx = n;
    vector<vector<int>> newIntervals;
    for (size_t i = 0; i < n; i++)
    {
        newIntervals.push_back(intervals[i]);
        if (intervals[i][1] >= newInterval[0])
        {
            startIdx = i;
            break;
        }
    }
    int endIdx = startIdx;
    while (endIdx < n-1 && intervals[endIdx+1][0] <= newInterval[1])
    {
        endIdx++;
    }

    bool startOverlap, endOverlap, insertFirst;
    insertFirst = n > 0 && newInterval[1] < intervals[0][0];

    
    startOverlap = startIdx != n && (intervals[startIdx][0] <= newInterval[0]);
    endOverlap = endIdx != n && intervals[endIdx][1] >= newInterval[1];

    
    if (insertFirst)
    {
        newIntervals.insert(newIntervals.begin(), newInterval);
    }
    else if (startOverlap && endOverlap)
    {
        newIntervals[startIdx][0] = min(intervals[startIdx][0], newInterval[0]);
        newIntervals[startIdx][1] = intervals[endIdx][1];
    }
    else if (startOverlap)
    {
        newIntervals[startIdx][0] = min(intervals[startIdx][0], newInterval[0]);
        newIntervals[startIdx][1] = newInterval[1];
    }
    else if (endOverlap)
    {
        vector<int> overlap = {newInterval[0], intervals[endIdx][1]};
        newIntervals.push_back(overlap);
    }
    else
    {
        newIntervals.push_back(newInterval);
    }

    for (size_t i = endIdx+1; i < n; i++)
    {
        newIntervals.push_back(intervals[i]);
    }
    return newIntervals;
}

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        map<int, int> mp;
        for(auto &it : intervals)
        {
            mp[it[0]]++;
            mp[it[1]]--;
        }
        mp[newInterval[0]]++;
        mp[newInterval[1]]--;
        int count = 0;
        vector<vector<int>> ans;
        int start;
        for(auto &it : mp)
        {
            if(count==0) start = it.first;
            count += it.second;
            if(count == 0) ans.push_back({start, it.first});
        }
        return ans;
    }

};

int main() 
{
    fast;
    vector<vector<int>> interv = {{3,5},{12,15}};
    vector<int> newInterv = {6,6};
    insert(interv, newInterv);

    return 0;
}