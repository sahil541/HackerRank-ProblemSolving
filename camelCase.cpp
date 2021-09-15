int camelcase(string s) {
    int len = s.length();
    if(len == 1) return len;
    int ans = 1;
    for(int i=0;i<len;i++){
        if(isupper(s[i]))
        {
            ans++;
        }
    }
    return ans;
}
