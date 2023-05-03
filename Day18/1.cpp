class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    string res ="";
        unordered_map<char , bool>present;
        for(auto ch :  str){
            if(!present[ch])res+=ch;
            present[ch] = true;
        }
        return res;

	}
};