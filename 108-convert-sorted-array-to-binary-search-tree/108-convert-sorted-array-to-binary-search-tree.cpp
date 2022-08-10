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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return fun(nums,0,nums.size()-1);
    }
    TreeNode* fun(vector<int>& v,int l,int h)
    {
        if(l>h)
            return NULL;
        int mid=(l+h)/2;
        TreeNode* p =new TreeNode(v[mid]);
        p->left=fun(v,l,mid-1);
        p->right=fun(v,mid+1,h);
        return p;
    }
};