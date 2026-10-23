class Solution {
  public:
    void sortExceptK(vector<int>& arr, int k) {
        vector<int> temp;

        for (int i = 0; i < arr.size(); i++) {
            if (i != k) {
                temp.push_back(arr[i]);
            }
        }

        sort(temp.begin(), temp.end());

        int j = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (i != k) {
                arr[i] = temp[j++];
            }
        }
    }
};