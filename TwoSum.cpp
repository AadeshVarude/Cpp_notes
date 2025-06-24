// This code is for the Two sum problem 
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            int n=target-nums[i];
            if (umap.find(n) != umap.end())
            {
                if(i!=umap[n])
                {res.push_back(i);
                res.push_back(umap[n]);
                return res;}
            }
        }
        return res;
    }
};