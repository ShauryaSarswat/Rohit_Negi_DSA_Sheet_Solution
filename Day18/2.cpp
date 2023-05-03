class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
         int i=0;
        int j=0;
        int n=S.size();
        map<char,int>mp;
        int mn=INT_MAX;
        
        while(j<n){
            mp[S[j]]++;
            if(mp.size()==3){
                while(i<j && mp[S[i]]>1){
                    mp[S[i]]--;
                    i++;
                }
                 mn=min(mn,j-i+1);
               }
        j++;
    }
     return mn==INT_MAX?-1:mn;
    }
};