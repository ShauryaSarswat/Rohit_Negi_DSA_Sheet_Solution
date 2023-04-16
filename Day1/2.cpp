class Solution{
    public:
    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
            //code here
            unordered_map<int,int> frequency1;
            unordered_map<int,int> frequency2;
            for(auto it: A)
            {
                frequency1[it]++;
            }
            for(auto it: B)
            { 
                frequency2[it]++;
            }
            
            return frequency1 == frequency2;
        }
};