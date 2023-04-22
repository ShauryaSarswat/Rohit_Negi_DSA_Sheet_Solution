class solution{
    public:
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int maxIndex = n-1;
    	int minIndex = 0;
    	int max = arr[n-1]+1;
    	for(int i=0;i<n;i++)
    	{
    	    if(i%2==0)
    	    {
    	        arr[i] = (arr[maxIndex]%max)*max+arr[i];
    	        maxIndex-=1;
    	        
    	    }
    	    else
    	    {
    	        arr[i] = (arr[minIndex]%max)*max+arr[i];
    	        minIndex+=1;
    	    }
    	}
    	for(int i=0;i<n;i++)
    	{
    	    arr[i]/=max;
    	}
    
    	 
    }
};
