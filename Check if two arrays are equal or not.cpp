class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        sort(A.begin(),A.end());
        int c=0;
        sort(B.begin(),B.end());
        for(int i=0;i<A.size();i++){
            if(A[i]!=B[i]){
                c++;
            }
        }
        if(c==0){
            return true;
        }
        else{
            return false;
        }
    }
};
