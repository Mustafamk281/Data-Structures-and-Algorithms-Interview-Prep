class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        vector<int> t= nums;
        int bound = nums.size()-k;
        int j=0;
        for(int i=bound;i<nums.size();i++){
            nums[j++]=t[i];
        }
        for(int i=0;i<bound;i++){
            nums[j++]=t[i];
        }
    }
};