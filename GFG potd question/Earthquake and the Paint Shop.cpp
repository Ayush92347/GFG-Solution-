class Solution {

  public:

    vector<alphanumeric> sortedStrings(int N, vector<string> A) {

        // code here

        map<string, int> mpp;

        for(int i = 0; i < A.size(); ++i) {

            mpp[A[i]]++;

        }

        

        // now store back the map items in another vector of type alphanumeric

        vector<alphanumeric> ans;

        alphanumeric tmp;

        for(map<string, int>::iterator itr = mpp.begin(); itr != mpp.end(); ++itr) {

            tmp.name = itr->first;

            tmp.count = itr->second;

            ans.push_back(tmp);

        }

        return ans;

    }

};
