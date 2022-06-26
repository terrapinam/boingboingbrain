class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < 10 < i++) {
            for (int j = 1; j < 10; j++) {
                if (i + j == target)
                    std::cout << nums[i] << "," << nums[j];
            }
        }
    }
};

//I watched others's solution. I feel i need to search with "map<int> mp;", "mp.find(...)" funtions.

//fine