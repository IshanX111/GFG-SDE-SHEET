class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(check(root)==-1){
            return false;
        }
        else{
            return true;
        }

    }
    int check(Node *root){
        if(root==NULL){
            return 0;
        }
        int lh=check(root->left);
        int rh=check(root->right);

        if(lh==-1){
            return -1;
        }
        if(rh==-1){
            return -1;
        }

        if(abs(lh-rh)>1){
            return -1;
        }
        return 1+max(lh,rh);
    }
};
