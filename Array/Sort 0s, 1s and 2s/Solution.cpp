#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public : 

    void sort012(vector<int> &nums){
        int n = nums.size();
        int low = 0, mid = 0, high = n -1;

        while(mid <= high){

            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                low +=1;
                mid +=1;
            }
            else if(nums[mid] == 1) mid+=1;
            else{
                swap(nums[mid], nums[high]);
                high -=1;
            } 
        }
    }
};
int main(){

    vector<int> nums = {0,1,1,2,0,1,2,0,1,2};
    Solution sol;
    sol.sort012(nums);

    for(int i : nums){
        cout << i << " ";
    }
    return 0;
}