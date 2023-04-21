class Solution {

  public:

    int longestPerfectPiece(int arr[], int N) {

        

        multiset<int> s;

        

        int ans = 0;

        

        for(int i=0, j=0; i<N; i++)

        {

            s.insert(arr[i]);

            while (*s.rbegin() - *s.begin()>1)

    			s.erase(s.find(arr[j++]));    		ans = max(ans, (int)s.size());

        }

        

        return ans;

    }

};
