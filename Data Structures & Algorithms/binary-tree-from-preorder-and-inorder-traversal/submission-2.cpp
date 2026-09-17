/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int preindx=0;
    unordered_map<int,int> mp;
    TreeNode* build(vector<int>& preorder,int left,int right){
        if(left>right){
            return NULL;
        }
        int rootval=preorder[preindx++];
        TreeNode* root=new TreeNode(rootval);
        int mid=mp[rootval];
        root->left=build(preorder,left,mid-1);
        root->right=build(preorder,mid+1,right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return build(preorder,0,preorder.size()-1);
    }
};
