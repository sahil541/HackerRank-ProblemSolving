long repeatedString(string s, long n) {
    long len = s.size();
    long x = n/len;
    long y = n%len;
    long result = 0;
    for (int i=0; i<len;i++)
    {
        if(s[i] == 'a')
        result++;
    }
    result = result * x;
    for(int i=0;i<y;i++)
    {
        if(s[i] == 'a')
        result++;
    }
    
    return result; 
}