class Solution {
public:
    int majorityElement(vector<int>& arr) {

        int candidate = -1;
        int count = 0;

        for (int num : arr) {

            if (count == 0) {
                candidate = num;
                count = 1;
            }
            else if (candidate == num) {
                count++;
            }
            else {
                count--;
            }
        }

        count = 0;

        for (int num : arr)
            if (num == candidate)
                count++;

        return (count > arr.size() / 2) ? candidate : -1;
    }
};

// Sorting Approach
class Solution {
public:
    int majorityElement(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        int candidate = arr[arr.size() / 2];
        int count = 0;

        for (int x : arr)
            if (x == candidate)
                count++;

        return (count > arr.size() / 2) ? candidate : -1;
    }
};