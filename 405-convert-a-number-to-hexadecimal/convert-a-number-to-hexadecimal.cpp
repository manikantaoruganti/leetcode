class Solution {
public:
    string toHex(int num) {
        if(num==0) return "0";
unsigned int n=num;
string res;
char hex[]="0123456789abcdef";
while(n){
    res=hex[n&15]+res;
    n>>=4;
}
return res;

    }
};