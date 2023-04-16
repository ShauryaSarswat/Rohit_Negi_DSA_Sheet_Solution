class solution{
    public:
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        if(s == 0)
            return {-1};
        
        long long sum = 0;
        
        int start = 0, end = 0;
        
        while(end <= n){
            
            if(sum == s){
                return {start+1,end+1};
            }
            
            if(sum < s){
                sum += arr[end];
                if(sum == s){
                    return {start+1,end+1};
                }
                end++;
            }
            else if(sum > s){
                sum -= arr[start];
                if(sum == s){
                    return {start+2,end};
                }
                start++;
            }
        }
        
        return {-1};
    }
};