#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &arr) {
    int ans = 0;

    // Step 1: XOR all elements in the array
    for(int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    // Step 2: XOR with numbers from 1 to n-1
    for(int i = 1; i < arr.size(); i++) {
        ans = ans ^ i;
    }

    return ans; // The duplicate number
}

int main() {
    vector<int> arr = {1, 3, 4, 2, 2}; // Example test case

    int duplicate = findDuplicate(arr);
    cout << "Duplicate number: " << duplicate << endl;

    return 0;
}
