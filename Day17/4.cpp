int longestSubstrDistinctChars (string s)
{
    // your code here
    unordered_map<char, int> mp;
    int ans = 0, count=0;
    for(int i=0;i<s.size();i++){
        if(i==0 || mp[s[i]]==0){
            mp[s[i]]=i;
        }
        else{
            int p = mp.size();
            ans=max(ans,p);
            i=mp[s[i]];
            mp.clear();
        }
    }
    int p = mp.size();
    ans=max(ans,p);
    return ans;
}