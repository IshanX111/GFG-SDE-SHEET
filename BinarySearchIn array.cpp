
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int res=binary_search(arr,arr+n,k);
        if(res==0){
            return -1;
        }
        else{
            //return 1;
            int finalres=lower_bound(arr,arr+n,k)-arr;
            return finalres;
        }
    }
};
