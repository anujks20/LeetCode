class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        while (l < r){
            if (nums[l] % 2 != 0){
                if (nums[r] % 2 == 0){
                    swap(nums[l], nums[r]);
                    l++;
                    r--;
                }
                else{
                    r--;
                }
            }
            else{
                l++;
            }
        }
        return nums;
    }
};