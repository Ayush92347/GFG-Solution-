class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {

        // Code here

        sort(start, start+N);

        sort(end, end+N);

        int ans=1;

        

        for(int i=1,j=0; i<N && j<N; i++)

        {

            if(start[i]<end[j])

                ans++;

            else

                j++;

        }

        return ans;

    }
};
