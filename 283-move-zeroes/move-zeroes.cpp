class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=-1;
        int right=0;

        while(right<nums.size()){
            if(nums[right]!=0){
                left++;
                swap(nums[left],nums[right]);
            }
            right++;
        }

    }
};