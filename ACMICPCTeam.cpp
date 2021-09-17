vector<int> acmTeam(vector<string> topic) {
    int n = topic.size();
    int max=0,ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int counter = count(topic[i],topic[j]);
            if(counter>max){
                max = counter;
                ans = 1;
            }else if (counter == max) {
                ans++;
            }
        }
    }
    vector<int> v;
    v.push_back(max);
    v.push_back(ans);
    return v;
}
