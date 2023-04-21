class Solution{

    public:

    int dp[101][101];

 

    // function to check all possible combinations

    // of removal and return the minimum one

    int countRemovals(vector<int> arr, int i, int j, int k)

    {

        // base case when all elements are removed

        if (i >= j)

            return 0;

     

        // if condition is satisfied, no more

        // removals are required

        else if ((arr[j] - arr[i]) <= k)

            return 0;

     

        // if the state has already been visited

        else if (dp[i][j] != -1)

            return dp[i][j];

     

        // when Amax-Amin>d

        else if ((arr[j] - arr[i]) > k) {

     

            // minimum is taken of the removal

            // of minimum element or removal

            // of the maximum element

            dp[i][j] = 1 + min(countRemovals(arr, i + 1, j, k),

                               countRemovals(arr, i, j - 1, k));

        }

        return dp[i][j];

    }

    int removals(vector<int>& arr, int k)

    {

        // sort the array

        int n = arr.size();

        sort(arr.begin(), arr.end());

     

        // fill all stated with -1

        // when only one element

        memset(dp, -1, sizeof(dp));

        if (n == 1)

            return 0;

        else

            return countRemovals(arr, 0, n - 1, k);

    }

};
