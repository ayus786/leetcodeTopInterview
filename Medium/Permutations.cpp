class Solution {
public:
    vector<vector<int>> v;
    void makePermu(vector<int>& nums,int n,int s){
        if(s==nums.size()){
            v.push_back(nums);
            return;
        }
        for(int i=s; i<nums.size(); i++){
            swap(nums[i],nums[s]);
            makePermu(nums,n,s+1);
            swap(nums[i],nums[s]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        makePermu(nums,n,0);
        return v;
    }
};
