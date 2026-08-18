class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (int j = i; j < n; j++) {
                sum += arr[j];

                if (sum == k) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};