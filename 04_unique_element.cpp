#include <iostream> // Include the input-output stream library
using namespace std;

// Function to find the unique element in an array
int findUnique(int *arr, int size) {
    int ans = 0; // Initialize ans to 0
    for (int i = 0; i < size; i++) { // Loop through each element in the array
        ans = ans ^ arr[i]; // Perform XOR operation with each element
    }
    return ans; // Return the unique element
}

int main() {
    int arr[] = {2, 3, 5, 3, 2}; // Example array with a unique element
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int uniqueElement = findUnique(arr, size); // Call the function to find the unique element
    cout << "The unique element is: " << uniqueElement << endl; // Print the unique element
    
    return 0; // Return 0 to indicate successful execution
}
