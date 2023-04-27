string reverseWord(string str){
    
    if(str.size()<1)
    {
        return str;
    }
    int i=0;
    int j = str.size()-1;
    while(i<j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i+=1;
        j-=1;
    }
    return str;
}