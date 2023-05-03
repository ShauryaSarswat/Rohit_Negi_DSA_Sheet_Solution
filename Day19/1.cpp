class Solution{
  public:
    vector <string> generateCode(int N)
    {
         //Your code here
        vector<string> out = {"0", "1"};
         if(N==1) return out;
         
         vector<string> tmp;
         for(int i = 1; i<N; i++)
         {
             tmp = out;
             for(auto &s: tmp) s = to_string(0)+s;
             reverse(out.begin(), out.end());
             for(auto &s: out) s = to_string(1)+s;
             for(auto s: out) tmp.push_back(s);
             out = tmp;
         }
         
         
         return tmp;
    }
};