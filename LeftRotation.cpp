vector<int> rotateLeft(int d, vector<int> arr) {
    
      while (d--) {
          arr.push_back(arr[0]);
          arr.erase(arr.begin());
      }
      return arr;
}
