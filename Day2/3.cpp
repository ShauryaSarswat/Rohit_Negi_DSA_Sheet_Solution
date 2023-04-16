class solution{
    public:
        void segregateElements(int arr[],int n)
        {
            // Your code goes here
            vector<int> negElements;
            vector<int> posElements;
            
            for(int i=0;i<n;i++)
            {
                if(arr[i]<0)
                {
                    negElements.push_back(arr[i]);
                }
                else
                {
                    posElements.push_back(arr[i]);
                }
            }
            
            for(int i=0;i<posElements.size();i++)
            {
                arr[i] = posElements[i];
            }
            for(int i=0;i<negElements.size();i++)
            {
                arr[i+posElements.size()] = negElements[i];
            }
        }
};