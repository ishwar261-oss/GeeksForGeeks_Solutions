#include<iostream>
#include<vector>
using namespace std;

void insertAtIndex(vector<int> &arr, int index, int val) {
    int n = arr.size();

    arr.push_back(0);

    for(int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = val;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};

    int index = 2;
    int val = 10;

    insertAtIndex(arr, index, val);

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}