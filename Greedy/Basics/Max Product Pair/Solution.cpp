class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;

        for (int x : arr) {
            if (x > max1) {
                max2 = max1;
                max1 = x;
            }
            else if (x > max2) {
                max2 = x;
            }
        }

        return max1 * max2;
    }
};