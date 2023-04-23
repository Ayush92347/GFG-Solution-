class Solution {
  public:
    // Function to find largest subtree sum.
    void sum(Node* root,unordered_map<Node*,int>&helper){
        if(root==NULL)return;
        sum(root->left,helper);
        sum(root->right,helper);
        if(root->left!=NULL && root->right!=NULL)helper[root]=root->data+helper[root->left]+helper[root->right];
        else if(root->left==NULL && root->right!=NULL)helper[root]=root->data+helper[root->right];
        else if(root->left!=NULL && root->right==NULL)helper[root]=root->data+helper[root->left];
        else helper[root]=root->data;
    }
    int findLargestSubtreeSum(Node* root)
    {
        if(root==NULL)return 0;
        unordered_map<Node*,int> helper;
        sum(root,helper);
        int maxi=INT_MIN;
        for(auto it:helper)maxi=max(maxi,it.second);
        return maxi;
    }
};
