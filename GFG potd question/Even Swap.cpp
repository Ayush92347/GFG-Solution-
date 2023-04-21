class Solution

{

    public:

        vector <int> lexicographicallyLargest(vector <int> &arr,int n)

        {

            int pr=0;

            int i;

            for(i=1;i<n;i++)

            {

                if(arr[i]%2!=arr[i-1]%2)

                {

                    sort(arr.begin()+pr,arr.begin()+i,greater<int>());

                    pr=i;

                }

                

            }

            sort(arr.begin()+pr,arr.begin()+i,greater<int>());

            return arr;

            // Code here

        }

};
