class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n =nums.size();
        int ans=0;
        int diff=INT_MAX; // kyuki hame  
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++) // FOR FIXING THE FIRT ELEMENT
        {
            int first=nums[i];
            int start=i+1;
            int end=n-1;    
            while(start<end)
            {
               if(first+nums[start]+nums[end]==target) //equal
                   return target;
               else if(abs(first+nums[start]+nums[end]-target)<diff)
               {
                   diff=abs(first+nums[start]+nums[end]-target);
                   ans=first+nums[start]+nums[end];
               }
                if(first+nums[start]+nums[end]>target) // exeeds
                    end--;
                else start++; // not exeeding 
            }
        }
        return ans;
    }
};