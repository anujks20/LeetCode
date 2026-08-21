class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        
        vector<int> arr;

        while (l < r){
            int sum = numbers[l] + numbers[r];
            if (sum == target){
                arr.push_back(l+1);
                arr.push_back(r+1);
                break;
            }

            else if (sum < target){
                l++;
            }

            else if (sum > target){
                r--;
            }
        }
        return arr;
        

    }
};