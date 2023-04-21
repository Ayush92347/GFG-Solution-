class Solution {

  public:

    long long int maxSumLCM(int n) 

    {

        // code here

         long long int res=0,i;

        for(i=1;i<=sqrt(n);i++)

        {

            if(n%i==0 && n/i!=i)

            {

                res+=n/i;

                res+=i;

            }

            else if(n%i==0 && n/i==i)

            res+=i;

        }

        return res;

    }

};
