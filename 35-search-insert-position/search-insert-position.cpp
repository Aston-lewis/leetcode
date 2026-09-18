class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        for(int i = 0; i + 1 < nums.size(); i++) {

            if(nums[i] == target) {
                return i;
            }
            else if(nums[i] < target && nums[i + 1] > target) {
                return i + 1;
            }
        }

        // Check last element
        if(nums[nums.size() - 1] == target) {
            return nums.size() - 1;
        }

        // Target is greater than all elements
        if(target > nums[nums.size() - 1]) {
            return nums.size();
        }

        // Target is smaller than the first element
        return 0;
    }
};