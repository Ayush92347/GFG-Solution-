class Solution {

public:

 

    // int f(int i, int j, vector<int> &arr, vector<vector<int>> &dp){

    //     if(i>j) return 0;

    //     int maxi= INT_MIN;

    //     if(dp[i][j] != -1) return dp[i][j];

    //     for(int ind =i;ind<=j;ind++){

    //         int cost = arr[i-1] * arr[ind] * arr[j+1] + f(i, ind-1, arr, dp) + f(ind+1, j, arr, dp);

    //         maxi = max(maxi, cost);

    //     }

    //     return dp[i][j] = maxi;

    // }

 

    int maxCoins(int N, vector<int> &arr) {

        // code here

        arr.push_back(1);

        arr.insert(arr.begin(), 1);

        

        // vector<vector<int>> dp(N+1, vector<int> (N+1, -1));

        // return f(1, N, arr, dp);

        

        //tabulation method:-

        vector<vector<int>> dp(N+2, vector<int>(N+2, 0));

        for(int i=N;i>=1;i--){

            for(int j=1;j<=N;j++){

                if(i>j) continue;

                int maxi = INT_MIN;

                for(int ind=i;ind<=j;ind++){

                    int cost = arr[i-1] * arr[ind] * arr[j+1] + dp[i][ind-1] + dp[ind+1][j];

                    maxi = max(maxi, cost);

                }

                dp[i][j] = maxi;

            }

        }

        return dp[1][N];

    }

};
