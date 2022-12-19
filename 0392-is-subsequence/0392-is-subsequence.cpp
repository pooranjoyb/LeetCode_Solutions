class Solution {
public:
    bool isSubsequence(string s, string t) {
        int lenS = s.size(), lenT = t.size();
        int val = 0;
        for(int i = 0, j = 0; i < lenS, j < lenT;){
            if(s[i] == t[j])    {i++; j++; val++;}
            else    j++;
        }
        if(val == lenS)    return true;
        else            return false;
    }
};