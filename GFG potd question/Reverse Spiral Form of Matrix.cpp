class Solution {

  public:

     vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {

        // just do the matrix spiral order traversal store the ans and in the end reverse the ans

        vector<int> ans;

        int curRow=0,curCol=0;

        int i=0;

        while(curRow<R and curCol<C)

        {

            for(i=curCol;i<C;i++)

            ans.push_back(a[curRow][i]);

            curRow++;

            for(i=curRow;i<R;i++)

            ans.push_back(a[i][C-1]);

            

            C--;

            if(curRow<R)

            {

                for(i=C-1;i>=curCol;i--)

                ans.push_back(a[R-1][i]);

                

                R--;

            }

            if(curCol<C)

            {

                for(i=R-1;i>=curRow;i--)

                ans.push_back(a[i][curCol]);

                

                curCol++;

            }

            

        }

        reverse(begin(ans),end(ans));

        return ans;

    }

};
