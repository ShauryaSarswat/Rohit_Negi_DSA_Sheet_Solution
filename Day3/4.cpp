class Solution{
public:
    int remove_duplicate(int arr[],int n){
        
        int diff = 0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[diff])
            {
                diff+=1;
                arr[diff] = arr[i];
            }
        }
        return diff+1;
        
    }
};