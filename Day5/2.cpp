	class Solution{
    public:
    void rearrange(int arr[], int n) {
            // code here
            vector<int> negNum;
            vector<int> posNum;
            
            for(int i=0;i<n;i++)
            {
                if(arr[i]<0)
                {
                    negNum.push_back(arr[i]);
                }
                else
                {
                    posNum.push_back(arr[i]);
                    
                }
            }
            int i=0;
        int j=0, k=0;
        while(i<n){
            if(j<posNum.size()){
                arr[i] = posNum[j];
                i++;
                j++;
            } 
            if(k<negNum.size()){
                arr[i] = negNum[k];
                i++;
                k++;
            }
        }
    }
    };