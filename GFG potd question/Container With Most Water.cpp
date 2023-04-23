long long maxArea(long long A[], int len)
{
    int l = 0, r=len-1, h =0;
    long long ans = 0;
    while(l<r)
    {
        while(A[l] <= h )l++;
        while(A[r] <= h) r--;
        h = min(A[l],A[r]);
        ans =  max(ans, (long long)(r-l)*h);
    }
    return ans;
}
