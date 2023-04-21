class Solution{

    public:

    vector<long long int> twoOddNum(long long int arr[], long long int n)  

    {

         vector<long long int> ans(2);

         

         int x=0,res=0,res1=0;

         

         for(int i=0;i<n;i++) //calculate xors .

            x^=arr[i];

            

         int rgt=x & ~(x-1);  //for getting the rightmost set bit of

                               //the resultant xor 

         

         for(int i=0;i<n;i++){

             

             if((arr[i]&rgt)!=0)  // 1st list of numbers .

                res=res^arr[i];

             else

                res1=res1^ arr[i]; //2nd list of numbers.

         } 

         //put 2 nos according to their positions.

         if(res>res1)

         ans[0]=res,ans[1]=res1;

         else

            ans[0]=res1,ans[1]=res;

            

            return ans;

    }

};
