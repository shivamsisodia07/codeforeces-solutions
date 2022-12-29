class Solution {
public:

int solve(int i,string s,int dp[]){

if(i>=s.size()){
    return 1;
}

if(dp[i]!=0){
    return dp[i];
}
int op1=s[i]-'0',op2=0;
int ans=0;

if(i<s.size()-1){

op2=op1*10+s[i+1]-'0';
}

if(op1>0 ){
    ans+=solve(i+1,s,dp);
}

if(op1>0 and 0<op2 and op2<=26){
    ans+= solve(i+2,s,dp);
}
return dp[i]=ans;
}
    int numDecodings(string s) {
      int n = s.size();
        vector<int> dp(n+1);
        dp[n] = 1;
        for(int i=n-1;i>=0;i--) {
            if(s[i]=='0') dp[i]=0;
            else {
                dp[i] = dp[i+1];
                if(i<n-1 && (s[i]=='1'||s[i]=='2'&&s[i+1]<'7')) dp[i]+=dp[i+2];
            }
        }
        return s.empty()? 0 : dp[0];  
    }
};