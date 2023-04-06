class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int res=0;
        for(int i=1;i<=n;i++){
            res^=i;
        }
        for(int i=0;i<array.size();i++){
            res=res^array[i];
        }
        return res;
    }
};
