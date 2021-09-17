int equalizeArray(vector<int> arr) {
    int n = arr.size();
    int maxTime = 0;
    for(int i=0;i<n;i++){
        int counter = count(arr.begin(), arr.end(), arr[i]);
        if(counter > maxTime)
        {
            maxTime = counter;
        }
    }
    return (n-maxTime);
}
