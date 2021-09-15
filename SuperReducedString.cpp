string superReducedString(string s) {
    int len = s.length();
    for(int i=0;i<len;i++){
        if(s[i] == s[i+1]){
            s.erase(i,2);
            i=-1;
        }
    }
    if(s.empty()) s= "Empty String";
    return s;
}