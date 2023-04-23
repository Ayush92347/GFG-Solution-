class Solution {
  public:
    long long maxGcd(int n) {
        int c=1;
        long long sum=n;
        for(long long int i=n-1;i>=2;i--)
        {
            if(__gcd(sum,i)==1)
            {
                sum=sum*i;
                c++;
            }
            if(c>=4)
            {
                break;
            }
        }
        return sum;
    }
};
