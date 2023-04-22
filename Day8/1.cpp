class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	
        sort(arr,arr+n);
        
        long long product1 = arr[n-1] * arr[n-2] * arr[n-3];
        long long product2 = arr[0] * arr[1] * arr[n-1];
        return max(product1, product2);
    }
};