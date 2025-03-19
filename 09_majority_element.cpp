#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    // Step 1: Find the candidate using Moore's Voting Algorithm
    int candidate = 0, count = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    // Step 2: Verify if the candidate is the majority element
    int frequency = 0;
    for (int num : nums) {
        if (num == candidate) {
            frequency++;
        }
    }

    if (frequency > nums.size() / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = majorityElement(nums);
    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }
    
    return 0;
}
