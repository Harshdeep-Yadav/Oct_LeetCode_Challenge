#define ll long long int
// class Solution {
//     int mod=1e9+7;
//     ll helper(int n,int k,int target,int dice){
//         if(target<0){
//             return 0;
//         }
//         if(dice==n){
//             if(target==0){
//                 return 1;
//             }
//             return 0;
//         }
        
//         ll ans=0;
//         for(int i=1;i<=k;i++){
//             ans+=(helper(n,k,target-i,dice+1)%mod);
//         }
//         return (ans%mod);
//     }
// public:
//     int numRollsToTarget(int n, int k, int target) {
//         int ans=helper(n,k,target,0);
//         return ans;
//     }
// };
class Solution {
    int mod=1e9+7;
    ll helper(int n,int k,int target,int dice,vector<vector<ll>>&dp){
        if(target<0){
            return 0;
        }
        if(dice==n){
            if(target==0){
                return 1;
            }
            return 0;
        }
        
        if(dp[dice][target]!=-1){
            return dp[dice][target];
        }
        
        ll ans=0;
        for(int i=1;i<=k;i++){
            ans+=(helper(n,k,target-i,dice+1,dp)%mod);
        }
        return dp[dice][target]=(ans%mod);
    }
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<ll>>dp(n+1,vector<ll>(target+1,-1));
        int ans=helper(n,k,target,0,dp);
        return ans;
    }
};