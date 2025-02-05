// LC - 1790


class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if ( s1 == s2 ) return true;
        int c = 0;
        vector<int> temp;
        for ( int i = 0; i < s1.size(); i++ ) {
            if ( s1[i] != s2[i] ) {
                c += 1;
                temp.push_back(i);
            }
        }
        if ( c != 0 && c != 2 ) return false;
        if ( s1[temp[0]] != s2[temp[1]] || s1[temp[1]] != s2[temp[0]] ) return false;
        return true;
    }
};