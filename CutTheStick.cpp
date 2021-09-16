vector<int> cutTheSticks(vector<int> arr) {
    sort(arr.begin(), arr.end());
    vector<int> result;
    int i=0;
    int n = arr.size();
    while(i<n){
        result.push_back(n-i);
        i+=count(arr.begin(), arr.end(), arr[i]); 
    }       
    return result;
}