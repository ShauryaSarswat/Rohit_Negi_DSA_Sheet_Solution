class solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    // Expected Time Complexity: O(n).
    // Expected Auxiliary Space: O(1). 
    int search(int arr[], int N, int X)
        {
            
            
            for(int i=0;i<N;i++)
            {
                if(arr[i]==X)
                {
                    return i;
                }
            }
            return -1;
        }
};