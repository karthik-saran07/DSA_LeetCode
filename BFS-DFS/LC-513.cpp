class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {

        int res = 0;
        queue<TreeNode*> q;
        q.push(root);
        while ( !q.empty() ) {
            int len = q.size();
            vector<int> path;
            for ( int i = 0; i < len; i++ ) {
                TreeNode* tree = q.front();
                q.pop();
                if ( tree->left != nullptr ) q.push( tree->left );
                if ( tree->right != nullptr ) q.push( tree->right );
                path.push_back(tree->val);
            }
            res = path[0];
        }
        return res;
    }
};