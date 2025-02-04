// LC - 1305
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1, dec = 1, c1 = 1, c2 = 1;
        for ( int i = 0; i < nums.size()-1; i++ ) {
            if ( nums[i+1] > nums[i] ) { 
                c1 += 1;
                inc = max ( inc, c1 );
                c2 = 1;
            } else if ( nums[i+1] < nums[i] ) {
                c2 += 1;
                dec = max ( dec, c2 );
                c1 = 1;
            } else {
                c1 = 1;
                c2 = 1;
            }
        }
        return max ( inc, dec );
    }
};