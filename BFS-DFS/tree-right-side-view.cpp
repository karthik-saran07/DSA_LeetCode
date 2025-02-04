// LC - 199

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