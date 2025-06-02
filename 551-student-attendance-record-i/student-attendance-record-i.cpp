class Solution {
public:
    bool checkRecord(string s) {
        int a = 0;
for (int i = 0; i < s.size(); ++i) {
    if (s[i] == 'A' && ++a == 2) return false;
    if (i >= 2 && s[i] == 'L' && s[i-1] == 'L' && s[i-2] == 'L') return false;
}
return true;

    }
};