class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int maxi=0;
    int diameter(Node* root) {

        int x=check(root);
        return maxi+1;

    }
    int check(Node *root){
        if(root==NULL){
            return 0;
        }
        int lh=check(root->left);

        int rh=check(root->right);

        maxi=max(maxi,(lh+rh));

        return 1+max(lh,rh);
    }
};
