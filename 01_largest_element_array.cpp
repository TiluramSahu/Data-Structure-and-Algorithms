#include <iostream>
#include <vector>
using namespace std;

// Function to find the largest element using a linear scan
int findLargestOptimal(const vector<int>& arr) {
    // Initialize max with the first element of the array
    int max = arr[0];   
    // Traverse through the array starting from the second element
    for (int i = 1; i < arr.size(); i++) {
        // If the current element is greater than the current max, update max
        if (arr[i] > max) {
            max = arr[i];
        }
    } 
    // Return the largest element found
    return max;
}

int main() {
    // Defining the array using a vector
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2}; 
    // Printing the largest element using optimal approach
    cout << "Largest Element (Optimal): " << findLargestOptimal(arr) << endl;
    return 0;
}
