class solution{
    public:
    long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr, arr + n); // Sort the array in ascending order
    int count = 0;
    for (int i = 0; i < n - 2; i++) {
        int j = i + 1, k = n - 1;
        while (j < k) {
            if (arr[i] + arr[j] + arr[k] >= sum) {
                k--; // If the sum is greater than or equal to the target sum, decrement k
            } else {
                count += k - j; // If the sum is less than the target sum, add all possible triplets with i and j
                j++; // Increment j to try larger values of arr[j]
            }
        }
    }
    return count;
	}
};