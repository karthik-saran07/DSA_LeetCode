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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if ( root == nullptr ) return res;
        queue<TreeNode*> q;
        q.push(root);
        int a = 0;
        while ( !q.empty() ) {
            int len = q.size();
            vector<int> path;
            for ( int i = 0; i < len; i++ ) {
                TreeNode* tree = q.front();
                q.pop();
                path.push_back(tree->val);
                if ( tree->left != nullptr ) q.push(tree->left);
                if ( tree->right != nullptr ) q.push(tree->right);
            }
            if ( a % 2 == 0 )
                res.push_back(path);
            else {
                reverse(path.begin(), path.end());
                res.push_back(path);
            }
            a += 1;
        }
        return res;
    }
};