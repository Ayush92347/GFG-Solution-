class Solution{

    public:

    // This function wants you to modify the given input

    // array and no need to return anything

    // arr: input array

    // n: size of array

    //Function to rearrange  the array elements alternately.

    void rearrange(long long *arr, int n) 

    { 

     vector<int>ans;

     // Your code here

     for(int i=0;i<n;i++){

         ans.push_back(arr[i]);

     }

    long long int p=0,q=n-1;

     for(int i=0;i<n;i++){

         if(i%2==0){

             arr[i]=ans[q];

             q--;

         }

         else{

             arr[i]=ans[p];

             p++;

         }

     }

    }

};
