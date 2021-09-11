class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> nums3;
        for (int i = 0; i < nums1.size(); i++)
        {
            nums3.push_back(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++)
        {
            nums3.push_back(nums2[i]);
        }

        sort(nums3.begin(), nums3.end());
        int len;
        int pos;
        double med=0;
        len=nums1.size()+nums2.size();
        if(len%2==0)
        {
            pos=(len/2);
            med=(nums3[pos]+nums3[pos-1])/2.0;
            return med;
        }
        else
        {
            pos=(len/2);
            med=nums3[pos];
            return med;
        }
    }
};