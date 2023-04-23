class Solution{   
public:
    int waysToBreakNumber(int N){
       int mod = 1e9+7;
        long long int ans = (N+1)%mod;
        ans = ((ans%mod)*((N+2)%mod))%mod;
        ans/=2;
        ans%=mod;
        return ans;
    }
};
