class Solution {

  public:

        vector<int> leafNodes(int arr[],int N) {

       vector<int>v;

       stack<int>s;

       s.push(arr[0]);

       for(int i=1;i<N;i++)

       {

           if(arr[i]<s.top())

           s.push(arr[i]);

           else

           {

               int size=s.size();

               int x=s.top();

               while(!s.empty() && arr[i]>s.top())

               s.pop();

               s.push(arr[i]);

               if(size>s.size())

               v.push_back(x);

           }

       }

       v.push_back(s.top());

       return v;

   }

};
