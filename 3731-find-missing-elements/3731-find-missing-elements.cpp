class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;


        sort(nums.begin(),nums.end());

        int s = nums.front();
        int l = nums.back();

        for(int i=s;i<=l;i++){

        if (count(nums.begin(), nums.end(), i) == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};