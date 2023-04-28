class Solution
{
    public:
    int maxSubsetXOR(int arr[], int N)
    {
        //Your code here
        if(N==0)
        {
            return 0;
        }
        int num = 0;
        while(1)
        {
            int maxer = *max_element(arr,arr+N);
            if(maxer==0)
            {
                return num;
            }
            num = max(num,num^maxer);
            for(int i=0;i<N;i++)
            {
                arr[i] = min(arr[i],arr[i]^maxer);
            }
        }
    }
};