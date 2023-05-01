string merge (string s1, string s2)
{
    // your code here
    int l1 = s1.length();
    int l2 = s2.length();
    
    string s3 = "";
    
    if(l1 == 0){
        return s2;
    }
    
    if(l2 == 0){
        return s1;
    }
    
    int i = 0;
    int j = 0;
    
    
    while(i<l1 && j<l2){
        s3 += s1[i];
        i++;
        s3 += s2[j];
        j++;
    }
    
    while(i<l1){
        s3 += s1[i++];
    }
    while(j<l2){
        s3 += s2[j++];
    }
    return s3;
}