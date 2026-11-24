class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> alphabet(26);
        for(int i = 0; i < s.size(); i++) {
            alphabet[s[i]-'a']++;
        }
        int max_consonant = 0;
        int max_vowel = 0;

        for(int i = 0; i < 26; i++) {
            if(i == 0 || i == 4 || i == 8 || i == 14 || i == 20)
                max_vowel = max(max_vowel, alphabet[i]);
            else 
                max_consonant = max(max_consonant, alphabet[i]);
        }
        return max_vowel + max_consonant;
    }
};