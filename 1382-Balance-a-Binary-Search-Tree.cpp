class Solution {
    void inorder(TreeNode*root,vector<int> &v)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    TreeNode* help(int s,int e,vector<int> v)
    {
//         base case
        if(s>e)
        {
            return NULL;
        }
        int mid=s+(e-s)/2;
        TreeNode*root=new TreeNode(v[mid]);
        root->left=help(s,mid-1,v);
        root->right=help(mid+1,e,v);
        return root;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {  
        vector<int> v;
        inorder(root,v);
        return help(0,v.size()-1,v);
    }
};