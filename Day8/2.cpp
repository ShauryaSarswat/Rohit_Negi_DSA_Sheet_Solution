long long maxArea(long long A[], int len)
{
    // Your code goes here
    // matrix = []
    // for i in range(len(A)):
    //     for j in range(i+1,len(A)):
    //         matrix.append(min(A[i],A[j])*(j-i))
    // return max(matrix)
    int low = 0;
    int high = len-1;
    long long maxVol = 0;
    while(low<high)
    {
        long long temp = min(A[low],A[high])*(high-low);
        maxVol = max(maxVol,temp);
        if(A[low]<A[high])
        {
            low+=1;
        }
        else
        {
            high-=1;
        }
    }
    return maxVol;
}