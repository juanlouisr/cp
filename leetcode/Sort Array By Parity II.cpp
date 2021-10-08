#include <bits\stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> sortArrayByParityII(vector<int>& nums) {
            vector<int> vect;
            queue<int> even;
            queue<int> odd;
            for (int i = 0; i< nums.size(); i++){
                if (nums[i] % 2 == 0){
                    even.push(nums[i]);
                }
                else{
                    odd.push(nums[i]);
                }
            }
            for (int i = 0; i< nums.size()/2; i++){
                vect.push_back(even.front());
                even.pop();
                vect.push_back(odd.front());
                odd.pop();
            }
            return vect;
        }
};