#include<iostream>
#include<vector>
using namespace std;
    int moreFrequent(vector<int>& arr, int x, int y) {
        int countX = 0;
        int countY = 0;

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == x)
                countX++;

            if(arr[i] == y)
                countY++;
        }

        if(countX > countY)
            return x;

        if(countY > countX)
            return y;

        // Same frequency
        return min(x, y);
    }
int main() {
    vector<int> arr = {1, 2, 3, 2, 1, 2, 3, 1};
    int x = 1;
    int y = 2;

    int result = moreFrequent(arr, x, y);
    cout << "The more frequent element between " << x << " and " << y << " is: " << result << endl;

    return 0;
}