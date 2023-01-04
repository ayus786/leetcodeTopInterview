class Solution {
public:
    void makeParen(int o,int c,int n,string s1,vector<string>& v){
        if(o==0 && c==0){
            v.push_back(s1);
            return;
        }
        if(o>0) makeParen(o-1,c,n,s1+'(',v);
        if(c>o) makeParen(o,c-1,n,s1+')',v);
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string> v;
        makeParen(n,n,n,s,v);
        return v;
    }
};
