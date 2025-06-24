// Problem:
// When i == nums.size() - 1, then i + 1 == nums.size(), which is past the end of the array. Accessing nums[i + 1] is undefined behavior.

// Why C++ Doesn’t Throw:
// C++ is a low-level language that prioritizes performance.

// It does not do bounds checking for std::vector when you use operator[].

// nums[i] is unchecked access.

// If i is out of range, it's your responsibility, not the compiler’s or runtime’s.

// This is unlike languages like Python, Java, or C# that will throw an IndexError or ArrayIndexOutOfBoundsException.

#include <vector>
#include <algorithm>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            std::cout <<i<<endl;
            if(nums[i]==nums[i+1])
            {
                return true;
            }

        }
        return false;
        
    }
};

// Using maps
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto ele: m )
        {
            if (ele.second>1)
            return true;
        }
        return false;
        
    }
};
// Ussing sets
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};