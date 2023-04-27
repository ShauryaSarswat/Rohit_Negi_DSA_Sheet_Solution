class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        
    long long prod = 1;
    int count = 0;
    int start = 0;
    int counter = 0;
    while(counter<n)
    {
        prod*=arr[counter];
        if(prod<k)
        {
            count+=(counter-start+1);
        }
        else
        {
            while(prod>=k && start<=counter)
            {
                
                prod/=arr[start];
                start++;
            }
            if(prod<k)
            {
                count+=(counter-start+1);
            }
        }
        counter++;
    }
    return count;
   
    }
};