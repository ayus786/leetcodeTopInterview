class Solution {
public:
    void makeSets(vector<int>& nums,int s,vector<int> v,vector<vector<int>>& vv){
        if(s==nums.size()){
            vv.push_back(v);
            return;
        }
        makeSets(nums,s+1,v,vv);
        v.push_back(nums[s]);
        makeSets(nums,s+1,v,vv);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vv;
        vector<int> v;
        makeSets(nums,0,v,vv);
        return vv;
    }
};
