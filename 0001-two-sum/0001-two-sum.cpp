class Solution {
public:
 

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> temp;

    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int diffrence = target - num;

        if (temp.find(diffrence) != temp.end()) {
            return {temp[diffrence], i};
        }

        temp[num] = i;
    }

    return {}; // If no pair of elements sums to the target
}



};