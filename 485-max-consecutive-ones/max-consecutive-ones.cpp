class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int c_max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                c_max++;
            }
            else{
                if(c_max>max){
                    max=c_max;
                }
                c_max=0;
            }
        }
        if(c_max>max){
            max=c_max;
        }
        return max;
    }
};