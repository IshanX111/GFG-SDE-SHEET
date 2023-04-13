class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    typedef long long ll;
    long long maxSubarraySum(int arr[], int n){
        // Your code here
        ll res=0;
        ll maxi=-11111111;
        for(int i=0;i<n;i++){
            res+=arr[i];
            if(res>maxi){
                maxi=res;
            }
            if(res<0){
                res=0;
            }
        }
        return maxi;

    }
};
