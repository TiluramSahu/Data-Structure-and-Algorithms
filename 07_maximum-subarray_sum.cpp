#include <iostream>
#include <vector>
#include <climits>  // For INT_MIN

using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN, currentSum = 0;

    for (int num : nums) {
        currentSum += num;
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0) currentSum = 0;  // Reset if sum is negative
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = maxSubArray(nums);
    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
