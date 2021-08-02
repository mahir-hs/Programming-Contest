class Solution {
public:
    int reverse(int x) {
        
        string s = to_string(x);
        string ss="";
        if(x<0)
            ss+='-';
        
        ::reverse(s.begin(),s.end());
        ss+=s;
       
        
       try { return stoi(ss); }
        catch (const out_of_range& oor) { return 0; }
        
    }
};