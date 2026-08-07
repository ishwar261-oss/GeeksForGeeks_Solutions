#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        for(int i = 0; i < n; i+=1){
            if (nums[i] == target) return i;
        }
        return -1;
    }
};
int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    int target = 5;
    Solution sol;
    cout << sol.search(nums, target) << endl;
    return 0;
}