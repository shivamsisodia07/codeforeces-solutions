class Solution {
public:

static bool cmp(pair<int, char> a,
         pair<int, char> b)
{
    return a.first > b.first;
}

    string frequencySort(string s) {
        int n=s.size();
map<char,int>mp;
for(int i=0;i<n;i++){
    mp[s[i]]++;
}
vector<pair<int,char>>v;

for(auto it:mp){
v.push_back({it.second,it.first});
}

sort(v.begin(),v.end(),cmp);
string ans;
for(auto it :v){
    for(int i=0;i<it.first;i++){
 ans+=it.second;
    }
   
}
return ans;
    }
};