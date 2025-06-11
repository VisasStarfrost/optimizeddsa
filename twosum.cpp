#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
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
