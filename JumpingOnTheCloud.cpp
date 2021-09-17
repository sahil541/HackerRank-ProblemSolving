int jumpingOnClouds(vector<int> c) {
    int n = c.size();
    int ans = 0;
    for(int i=0;i<n-1;i++){
        if(c[i]==0){
        i++;
        }
        ans++;
    }
    return ans;
}
