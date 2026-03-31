class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> mppS;
        unordered_map<char, int> mppT;
        for(int ch = 0 ; ch < s.length() ; ch++){
            mppS[s[ch]]++;
            mppT[t[ch]]++;
        }
        
        return mppS == mppT;
    }
};
