class Solution{

    public:

    vector<int> findLeastGreater(vector<int>& arr, int n) {

        map<int,int> mp;

        vector<int> v;

        v.push_back(-1);

        mp[arr[n-1]]=1;

        for(int i=n-2;i>=0;i--)

        {

            mp[arr[i]]=1;

            map<int,int>::iterator it =mp.find(arr[i]);

            it++;

            if(it!=mp.end())

                v.push_back(it->first);

            else

                v.push_back(-1);

        }

        reverse(v.begin(),v.end());

        return v;

    }

};
