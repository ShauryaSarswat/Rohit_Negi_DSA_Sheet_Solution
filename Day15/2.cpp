class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string s)
    {
        // Your code here
        
        sort(s.begin(),s.end());
        unordered_map<char, int> mp;
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        char maxEle = s[0];
        int maxPos = mp[s[0]];
        
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]>maxPos)
            {
                maxPos = mp[s[i]];
                maxEle = s[i];
            }
        }
        return maxEle;
    }

};