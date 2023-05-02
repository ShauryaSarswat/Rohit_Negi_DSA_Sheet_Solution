class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
string temp;
while(ss>>temp){}
return temp.size();
    }
};