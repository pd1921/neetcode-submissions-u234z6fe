#include <unordered_set>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0; i<nums.size(); i++){
            int n = nums[i];

            if(s.count(n)) return true;

            s.insert(n);
        }

        return false;
    }
};