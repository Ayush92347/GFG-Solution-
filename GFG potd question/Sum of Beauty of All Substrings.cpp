class Solution {

  public:

    int beautySum(string s) {

        int n = s.size();

        int res = 0;

        

        int arr[n+1][26];

        

        for(int i=0;i<26;i++) arr[0][i]=0;

        

        for(int i=0;i<n;i++){

            for(int j=0;j<26;j++){

                arr[i+1][j]=arr[i][j];

            }

            arr[i+1][s[i]-'a']++;

        }

        

        for(int i=0;i<n+1;i++){

            for(int j=i+1;j<n+1;j++){

                int high=INT_MIN, low=INT_MAX;

                

                for(int k=0;k<26;k++){

                    if(arr[j][k]-arr[i][k]==0) continue;

                    high=max(high, arr[j][k]-arr[i][k]);

                    low=min(low, arr[j][k]-arr[i][k]);

                }

                

                res+=high-low;

            }

        }

        

        return res;

    }

};
