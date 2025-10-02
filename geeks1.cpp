#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void pushZeroesToEnd(vector<int> &arr) {
        int n = arr.size();
        int j = 0;

        // Move all non-zero elements to the front.
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[j++] = arr[i];
            }
        }

        // Fill remaining elements with 0.
        while (j < n) {
            arr[j++] = 0;
        }
    }
    void printArray(vector<int> &arr){
        // Printing the array after moving zeroes to end.
        for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    }
};

int main() {
    vector<int> arr = {1, 0, 77, 87, 9, 0, 22, 0};

    Solution a1;
    a1.pushZeroesToEnd(arr);
    a1.printArray(arr);
}