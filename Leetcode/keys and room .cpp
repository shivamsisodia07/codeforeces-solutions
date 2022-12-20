class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int>q;
        int n=rooms.size();
vector<int>vis(n,0);
vis[0]=1;
for(int i=0;i<rooms[0].size();i++){
q.push(rooms[0][i]);
}

int count=1;
while(!q.empty() and count<n){

int temp=q.front();
q.pop();

if(vis[temp]==0){
count++;
vis[temp]=1;
for(int i=0;i<rooms[temp].size();i++){
    q.push(rooms[temp][i]);
}


}

if(count>=n){
    return true;
}
}


    return false;


    }
};