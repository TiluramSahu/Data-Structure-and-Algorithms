#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
    public:
        int maxArea(vector<int>& height) {
            int maxWater = 0; // ans
            int lp = 0, rp = height.size() - 1;
            while (lp < rp) {
                int w = rp - lp;
                int ht = min(height[lp], height[rp]);
                int currWater = w * ht;
                maxWater = max(maxWater, currWater);
                height[lp] < height[rp] ? lp++ : rp--;
            }
            return maxWater;
        }
    };

    int main() {
        Solution solution;
        vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7}; // Example input
        int result = solution.maxArea(heights);
        cout << "Maximum water the container can hold: " << result << endl;
        return 0;
    }
    