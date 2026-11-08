
class Solution {
public:
    string findLargest(vector<int> &arr) {

        vector<string> nums;

        // Convert integers into strings
        for (int x : arr) {
            nums.push_back(to_string(x));
        }

        // Custom sorting
        sort(nums.begin(), nums.end(),
            [](string a, string b) {
                return a + b > b + a;
            });

        // Handle all zero elements
        if (nums[0] == "0") {
            return "0";
        }

        string ans = "";

        // Concatenate sorted strings
        for (string s : nums) {
            ans += s;
        }

        return ans;
    }
};
