class Solution {
public:
    // here the logic is we are checking if the total number of fresh are equal to the rotten and 



    //we can also do this question using another way that is the taking 
    // queue<pair<pair<int,int>,int>> this is like{{r,c},t}
    // this will store the the time also 

    // for the dir also we can do some other way for that also that is 
    // take two array {-1,0,1,0} and {0,-1,0,1} like this and they will 
    // be having the index number so we add and check the conditions
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        int fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        if(fresh==0){
            return 0;
        }
        int  mini=0;
        vector<pair<int,int>> dir={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            int size=q.size();
            bool rotten=false;

            while(size--){
                auto [x,y]=q.front(); // this is the popping one in the queue 
                q.pop();
                for(auto d:dir){
                    int nx=x+d.first;
                    int ny=y+d.second;
                    if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==1){
                        grid[nx][ny]=2;
                        fresh--;
                        q.push({nx,ny});
                        rotten=true;
                    }
                }
            }
            if(rotten){
                mini++;
            }
        }
        return (fresh==0)? mini:-1;
    }
};