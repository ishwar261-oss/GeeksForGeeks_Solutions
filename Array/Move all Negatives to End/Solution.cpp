
class Solution {
public:
    void segregateElements(vector<int>& arr) {
        vector<int> temp;

        // Store positive and zero elements first
        for (int x : arr) {
            if (x >= 0) {
                temp.push_back(x);
            }
        }

        // Store negative elements afterward
        for (int x : arr) {
            if (x < 0) {
                temp.push_back(x);
            }
        }

        // Copy elements back into original array
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = temp[i];
        }
    }
};
