#include <iostream>
#include <vector>
#include <algorithm> // For sorting

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end()); // Step 1: Sort the array
        
        vector<int> occurrences; // Array to store the occurrences of each unique element
        int i = 0;
        int n = arr.size();
        
        // Step 2: Count occurrences of each unique number
        while (i < n) {
            int count = 1; // At least 1 occurrence of the current element
            
            // Count occurrences of arr[i]
            while (i + 1 < n && arr[i] == arr[i + 1]) {
                count++;
                i++;
            }
            
            occurrences.push_back(count); // Store the count
            i++; // Move to the next unique element
        }

        // Step 3: Sort the occurrences array
        sort(occurrences.begin(), occurrences.end());

        // Step 4: Check for duplicate occurrences
        for (int j = 1; j < occurrences.size(); j++) {
            if (occurrences[j] == occurrences[j - 1]) {
                return false; // Duplicate frequency found
            }
        }

        return true; // All occurrences are unique
    }
};

int main() {
    Solution solution; // Create an instance of the Solution class
    
    // Predefined array for testing
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    
    // Call the function and print the result
    bool result = solution.uniqueOccurrences(arr);
    
    if (result) {
        cout << "True: All occurrences are unique.\n";
    } else {
        cout << "False: Some occurrences are not unique.\n";
    }

    return 0;
}
