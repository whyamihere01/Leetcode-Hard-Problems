class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt = 0;
        for(int i=left;i<=right;i++)
        {
            string s = words[i];
            if((s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u') and( s[s.length()-1] == 'a' || s[s.length() -1 ]=='e'|| s[s.length() -1 ]=='i' || s[s.length() -1 ]=='o' || s[s.length() -1 ]=='u'))
                cnt++;
                
        }
        return cnt;
        
    }
};
