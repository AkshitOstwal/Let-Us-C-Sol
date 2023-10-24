class Solution {
public:
    //this recursive fuction will return the min amount of health that the knight needs in the future
    //to rescue the queen
    int future(int row,int col,vector<vector<int>>& arr,vector<vector<int>>&dp)
    {
        int r=arr.size();
        int c=arr[0].size();
        //base case: if the knight goes out of the dungeon
        if(row>=r || col>=c)
            return 1e9;//very large number so that the knight does not choose this future health

        if(row==r-1 && col==c-1)//knight has reached the queen
        {
            if(arr[row][col]>=0)//knight will not recure any additional health as he will gain health
                return dp[row][col]= 1;
            else //knight must enter this cell with additional health of +1 to survive
                return dp[row][col]= abs(arr[row][col])+1;
        }
        if(dp[row][col]!=-1)
            return dp[row][col];
        int future_health_left=future(row,col+1,arr,dp);//the min amount of health he will need to survive the left path
        int future_health_down=future(row+1,col,arr,dp);//the min amount of health he will need to survive the down path
        int future_health=min(future_health_down,future_health_left);//he will go to the path that will require the minimum health
        int health_gain=arr[row][col];//the health he gained or lost in this cell
        int health_needed=future_health-health_gain;//the min health he requires to survive cell as well as his chosen path
        if(health_needed>0)//he needed additional health to survive this cell as well as this chosen future path
            return dp[row][col]= health_needed;
        else//he gained health in this cell and he did not require health 
            return dp[row][col]= 1;
    }
    int calculateMinimumHP(vector<vector<int>>&arr) 
    {
        int r=arr.size();
        int c=arr[0].size();
        vector<vector<int>>dp(r,vector<int>(c,-1));//stores the future required health
        return future(0,0,arr,dp);
    }
};
