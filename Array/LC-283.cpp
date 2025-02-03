// very intiutive solution wow!!

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0;
        for ( int i = 0; i < nums.size(); i++ ) {
            if ( nums[i] != 0 ) // move all non zeros to start, fill remaining with zeroes
                nums[idx++] = nums[i];
        }
        for ( ; idx < nums.size(); idx++ )
            nums[idx] = 0;
    }
};