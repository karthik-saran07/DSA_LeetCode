// first is very naive easy approach of using a min heap

class Solution {
public:

    priority_queue<int, vector<int>, greater<int>> pq;

    void dfs ( TreeNode* root ) {
        if ( root == nullptr ) return;
        pq.push(root->val);
        dfs(root->left);
        dfs(root->right);
    }

    int kthSmallest(TreeNode* root, int k) {

        dfs ( root );
        for ( int i = 0; i < k-1 && !pq.empty() ; i++ ) {
            pq.pop();
        }
        return pq.top();

    }
};


// a more intiutive approach is using a inorder traversal and storing the elements in a vector which is in ascending order then we return k-1 index

class Solution {
public:

    vector<int> pq;

    void dfs ( TreeNode* root ) {
        if ( root == nullptr ) return;
        dfs(root->left);
        pq.push_back(root->val);
        dfs(root->right);
    }

    int kthSmallest(TreeNode* root, int k) {

        dfs ( root );
        return pq[k-1];

    }
};