#include<stdio.h>
#include<iostream>
using namespace std;

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int minSum = INT_MAX;

        for (int k = l; k <= r; k++) {
            int sum = 0;

            for (int i = 0; i < k; i++) {
                sum += nums[i];
            }

            if (sum > 0) {
                minSum = min(minSum, sum);
            }

            for (int i = k; i < n; i++) {
                sum += nums[i] - nums[i - k];

                if (sum > 0) {
                    minSum = min(minSum, sum);
                }
            }
        }

        return minSum == INT_MAX ? -1 : minSum;
    }
};