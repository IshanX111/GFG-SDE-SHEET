class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        int res=0;
        for(int i=0;i<n;i++){
            res=res^arr[i];
        }
        return res;
    }
};
