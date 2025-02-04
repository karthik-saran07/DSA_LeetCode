//problem LC - 48

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int len = matrix.size();
        for ( int i = 0; i < len; i++ ) {
            for ( int j = i; j < len; j++ ) {
                swap ( matrix[i][j], matrix[j][i] );
            }
        }

        for ( int i = 0; i < len; i++ ) {
            int l = 0, r = len - 1;
            while ( l < r ) {
                swap(matrix[i][l++], matrix[i][r--]);
            }
        }

    }
};