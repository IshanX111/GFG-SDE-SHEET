class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        sort(a,a+n);
        sort(b,b+n,greater<long long>());
        long long res=0;
        for(long long i=0;i<n;i++){
            res=res+(a[i]*b[i]);
        }
        return res;

    }
};
