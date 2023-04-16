int missingNumber(int A[], int N)
{
    int sum = 0;
    for(int i=0;i<N-1;i++)
    {
        sum+=A[i];
    }
    int sum2 = (N*(N+1))/2;
    return abs(sum-sum2);
}