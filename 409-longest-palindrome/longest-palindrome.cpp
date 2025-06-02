class Solution {
public:
    int longestPalindrome(string s) {
        int cnt[128]={};
for(char c:s)cnt[c]++;
int res=0;
for(int x:cnt){
    res+=x/2*2;
    if(res%2==0&&x%2==1)res++;
}
return res;

    }
};