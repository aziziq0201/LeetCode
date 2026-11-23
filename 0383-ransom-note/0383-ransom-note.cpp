class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> alpha(26);
        if(magazine.size() < ransomNote.size()) return false;
        for(int i = 0; i < magazine.size(); i++) {
            alpha[char(magazine[i]) - 'a']++;
        }
        for(int i = 0; i < ransomNote.size(); i++) {
            alpha[char(ransomNote[i])-'a']--;
        }
        for(int i = 0; i < 26; i++) {
            if(alpha[i] < 0) return false;
        }
        return true;
    }
};