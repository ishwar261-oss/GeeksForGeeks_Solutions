#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:

     int kthSmallest1(vector<int> &arr, int k) {

        sort(arr.begin(), arr.end());

        return arr[k - 1];
    }

    // Without ' sort() '
    int kthSmallest2(vector<int> &arr, int k) {

        int n = arr.size();

        for (int count = 1; count <= k; count++) {

            int smallest = INT_MAX;
            int index = -1;

           for (int i = 0; i < n; i++) {

                if (arr[i] < smallest) {
                    smallest = arr[i];
                    index = i;
                }
            }

           arr[index] = INT_MAX;
        }

        return smallest;
    }
};