class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        int c=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<N;i++){
            if(K<arr[i]){
                break;
            }
            else{
                c++;
                K=K-arr[i];
            }
        }
        return c;
    }
};
