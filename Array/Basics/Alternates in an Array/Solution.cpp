class Solution {
public:
    vector<int> alternateNumbers(vector<int>& arr) {
        vector<int> ans;

        for (int i = 0; i < arr.size(); i += 2) {
            ans.push_back(arr[i]);
        }

        for (int i = 1; i < arr.size(); i += 2) {
            ans.push_back(arr[i]);
        }

        return ans;
    }
};
