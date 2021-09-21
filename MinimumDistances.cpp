int minimumDistances(vector<int> a) {
    vector<int> result;
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i] == a[j])
            {
                result.push_back(j-i);
            }
        }
    }
    if(result.empty())
    {
        return -1;
    }
    return (*min_element(result.begin(), result.end()));
}