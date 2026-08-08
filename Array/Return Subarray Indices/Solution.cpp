#include<iostream>
#include<vector>
using namespace std;
vector<int> subarrayIndices(vector<int>nums, int target){

    int n = nums.size();
    // Brute Force Approach..
  /*  for(int i = 0; i < n; i+=1){
        int sum = 0;
        for(int j = i; j < n; j+=1){
            sum += nums[j];

            if(sum == target) return {i+1, j+1};
        }
    }

    return {-1};
*/
    // Optimal Code
    int left = 0, sum = 0;
    for(int right = 0; right < n; right +=1){
        sum += numa[right];

        while(sum > target &&  left <= right){
            sum -= nums[left];
            left +=1;   
        }

        if(sum == target) return {left +1, right +1};
    }
    return {-1};
}
int main(){
    vector<int> nums = {1,2,3,7,5};
    int target = 12;
    vector<int> res = subarrayIndices(nums, target);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}