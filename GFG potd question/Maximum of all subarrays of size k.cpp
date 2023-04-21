class Solution

{

  public:

    //Function to find maximum of each subarray of size k.

    vector <int> max_of_subarrays(int *arr, int n, int k)

    {

        // your code here

        vector <int> ans;

        int i = 0, j = k-1;

        priority_queue <pair<int, int>> pq;

        

        for (int m = 0; m < k-1; m++) 

            pq.push({arr[m], m});

            

        while (j != n) {

            while (!pq.empty() && pq.top().second < i) 

                pq.pop();

            pq.push({arr[j], j});

            ans.push_back(pq.top().first);

            j++;

            i++;

        }

        

        return ans;

    }

};
