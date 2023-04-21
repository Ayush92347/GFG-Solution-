class Solution

{

    public:

        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)

        {

            vector <int> x,y;

            for(auto j:enemy)

                x.push_back(j[0]);

            for(auto j:enemy)

                y.push_back(j[1]);

            x.push_back(0);

            x.push_back(n+1);

            y.push_back(0);

            y.push_back(m+1);

            sort(x.begin(),x.end());

            sort(y.begin(),y.end());

            int maxx=0,maxy=0;

            for(int i=1;i<x.size();i++)

                maxx=max(maxx,x[i]-x[i-1]-1);

            for(int i=1;i<y.size();i++)

                maxy=max(maxy,y[i]-y[i-1]-1);

            return maxx*maxy;

        }

};
