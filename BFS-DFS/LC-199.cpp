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


    vector<int> rightSideView(TreeNode* root) {

        // we use bfs logic

        queue<TreeNode*> q;
        vector<int> res;
        if ( root == nullptr ) return res;
        q.push(root);
        while ( !q.empty() ) {
            int size = q.size();
            vector<int> path;
            for ( int i = 0; i < size; i++ ) {
                TreeNode* tree = q.front();
                q.pop();
                if ( tree->left != nullptr ) q.push(tree->left);
                if ( tree->right != nullptr ) q.push(tree->right);
                path.push_back(tree->val);
            }
            int len = path.size();
            res.push_back(  path[len - 1]);
        }
        return res;        
    }
};