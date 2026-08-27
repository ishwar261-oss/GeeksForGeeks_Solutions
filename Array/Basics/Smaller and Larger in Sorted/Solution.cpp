#include <iostream>
#include <vector>
using namespace std;

    int moreFrequent(vector<int>& arr) {
        int n = arr.size();
        int ans = -1;

        for(int i = 0; i < n; i++) {
            int count = 0;

            for(int j = 0; j < n; j++) {
                if(arr[i] == arr[j])
                    count++;
            }

            if(count > n / 2) {
                ans = arr[i];
                break;
            }
        }

        return ans;
    }

int main() {
    vector<int> arr = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int result = moreFrequent(arr);

    if(result != -1)
        cout << "The element that appears more than n/2 times is: " << result << endl;
    else
        cout << "No element appears more than n/2 times." << endl;

    return 0;
}   