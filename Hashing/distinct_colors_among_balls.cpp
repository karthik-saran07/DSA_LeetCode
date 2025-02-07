// a very good map question, builds good intuition
// LC - 3160

// reset code and try it out fresh

class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ball_map;
        unordered_map<int, int> color_map;
        vector<int> res;

        for ( auto vec : queries ) {
            int ball = vec[0];
            int col = vec[1];

        if ( ball_map.find( ball ) != ball_map.end() ) {
            color_map[ball_map[ball]] -= 1;
            if ( color_map[ball_map[ball]] == 0 )
                color_map.erase( ball_map[ball] );
        }
        ball_map[ball] = col;
        color_map[col] += 1;

        res.push_back( color_map.size() );
        }
    return res;
    }
};