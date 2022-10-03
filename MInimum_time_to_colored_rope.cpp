class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0, n=colors.size(), i=0;
        while(i<n){
            int j=i+1;
            int sum=neededTime[i],maxNum=neededTime[i];
            while(j<n && colors[i]==colors[j]){
            sum+=neededTime[j];
            maxNum=max(maxNum,neededTime[j]);
            j++;
        }
        ans+=sum-maxNum;
        i=j;
        }
        return ans;
    }
};