// LC - 2342

class Solution {
    public:
        int maximumSum(vector<int>& nums) {
            vector<pair<int, int>> mp ( 83 ); // 10^9 means 9 digit number, atmost 81 is max sum of digits, we vector of fixed size to reduce memory
            int max_val = -1;
            for ( auto num : nums ) {
                int sum = 0, temp = num;
                while ( temp > 0 ) {
                    sum += temp % 10;
                    temp /= 10;
                }
    
            auto& first = mp[sum].first;
            auto& second = mp[sum].second;
    
            if ( num > first ) {
                second = first;
                first = num;
            } else if ( num > second )
                second = num;
    
            if ( first > 0 && second > 0 )
                max_val = max ( max_val, first + second );
    
            }
        return max_val;
        }
    };
    