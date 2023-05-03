bool metaStrings (string s1, string s2)
{
    // your code here
    if(s1.size()!=s2.size()) return 0;
    if(s1==s2) return 0;
    int i=0;
    int j=s1.size()-1;
    while(s1[i]==s2[i]){
        i++;
    }
    while(s1[j]==s2[j]){
        j--;
    }
    swap(s1[i],s1[j]);
    if(s1==s2) return true;
    else return false;
}