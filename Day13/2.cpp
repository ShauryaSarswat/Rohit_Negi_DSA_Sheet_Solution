class Solution {
  public:
    long long countSubarray(int N,vector<int> A,long long L,long long R) {
     
     int i=0,j=0;
        long sum=0;
        long count=0;
        for(i=0;i<N;i++)
        {
            sum+=A[i];
            while(sum>L-1)
            {
                sum-=A[j];
                j++;
            }
            count+=(i-j+1);
        }
        j=0;i=0;
        long count2=0;
        sum=0;
        for(i=0;i<N;i++)
        {
            sum+=A[i];
            while(sum>R)
            {
                sum-=A[j];
                j++;
            }
            count2+=(i-j+1);
        }
        if(count2>=count)
        {
            return count2-count;
        }
        return count-count2;
    
    }
};