class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
        {
            //Your code here
            //return vector with correct order of elements
            set<int> sets;
            
            for(int i=0;i<n;i++)
            {
                sets.insert(arr1[i]);
            }
            for(int i=0;i<m;i++)
            {
                sets.insert(arr2[i]);
            }
            vector<int> result(sets.begin(),sets.end());
            return result;
        }
};