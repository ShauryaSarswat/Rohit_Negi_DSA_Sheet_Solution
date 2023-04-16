class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n) {
	    // code here
	    int mini=INT_MIN;
        for(int i=n-1;i>0;i--){
            if(arr[i]>mini) mini=arr[i];
            arr[i]=mini;
        }
        for(int i=0;i<n-1;i++) arr[i]=arr[i+1];
        
        arr[n-1]=-1;
	    
	    
	}

};