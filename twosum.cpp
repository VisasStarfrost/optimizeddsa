//runtime 0 ms (beats 100%)

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, const int target) {
        unordered_map<int, int> cache;
        cache.reserve(nums.size()); //avoid rehashing
        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            auto it = cache.find(num);
            if (it != cache.end()) {
                //avoid multiple hashmap lookups by referencing it->second
                return {it->second, i};
            }
            cache[target - num] = i;
        }
        return {}; 
    }
};
