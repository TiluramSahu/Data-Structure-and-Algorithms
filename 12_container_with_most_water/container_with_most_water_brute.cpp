#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0; // Store the maximum water
        for (int i = 0; i < height.size(); i++) {
            for (int j = i + 1; j < height.size(); j++) {
                int w = j - i;
                int ht = min(height[i], height[j]);
                int currWater = w * ht;
                maxWater = max(maxWater, currWater);
            }
        }
        return maxWater;
    }
};

int main() {
    Solution sol;
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7}; // Example input
    cout << "Maximum water container can hold: " << sol.maxArea(heights) << endl;
    return 0;
}
