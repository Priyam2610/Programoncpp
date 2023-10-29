#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lowerBound(vector<int>& nums, int target, int n) {
        int low = 0, high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int upperBound(vector<int>& nums, int target, int n) {
        int low = 0, high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] > target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerBound(nums, target, n);
        if (lb == n || nums[lb] != target) return {-1, -1};
        int ub = upperBound(nums, target, n);
        return {lb, ub - 1};
    }
};

int main() {
    Solution s;
    vector<int> nums;
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        nums.push_back(val);
    }

    cout << "Enter target: ";
    cin >> target;

    vector<int> result = s.searchRange(nums, target);
    cout << "Range: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
6