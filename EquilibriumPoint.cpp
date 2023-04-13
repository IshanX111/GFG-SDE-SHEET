class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array

    int equilibriumPoint(long long a[], int n) {

        // Your code here
        long long b[n];
        long long c[n];
        int sum=0;
        b[0]=a[0];
        for(int i=1;i<n;i++){
            b[i]=a[i]+b[i-1];
        }

        c[n-1]=a[n-1];



        for(int i=n-2;i>=0;i--){

            c[i]=a[i]+c[i+1];
        }
        for(int i=0;i<n;i++){
            if(b[i]==c[i]){
                return i+1;
            }
        }

        return -1;
    }

};
