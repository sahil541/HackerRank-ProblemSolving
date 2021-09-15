int camelcase(string s) {
    int len = s.length();
    if(len == 1) return len;
    int count = 1;
    for(int i=0;i<len;i++){
        if(isupper(s[i]))
        {
            count++;
        }
    }
    return count;
}