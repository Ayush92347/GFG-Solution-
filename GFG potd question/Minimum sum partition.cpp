class Solution{

  public:

	int solve(int arr[],int n,int index,int sum,int curr,vector<vector<int>>&dp){

        if(index==n-1){

            if(sum-arr[index]!=0){

                return abs(sum-arr[index]-(curr+arr[index]));

            }

            else{

                return abs(sum-curr);

            }

        }

        if(dp[index][sum]!=-1)return dp[index][sum];

        if(index>=n)return 0;

        int incl=solve(arr,n,index+1,sum-arr[index],curr+arr[index],dp);

        int excl=solve(arr,n,index+1,sum,curr,dp)+0;

        return dp[index][sum]=min(incl,excl);

    }

 int minDifference(int arr[], int n)  { 

     int sum=0;

     int index=0;

     for(int i=0;i<n;i++){

         sum+=arr[i];

     }

     vector<vector<int>>dp(n,vector<int>(sum+1,-1));

     int ans=solve(arr,n,index,sum,0,dp);

     return ans;

      

 } 

};
