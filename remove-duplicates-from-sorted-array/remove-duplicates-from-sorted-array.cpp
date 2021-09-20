class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        if(nums.size()<2)
        {
            return nums.size();
        }
        while(j<=nums.size()-1)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
            j++;
        }
        return i+1;
    }
};