class Solution {
  public:
    
    bool found(vector<vector<char>> &grid, string &word, int index,int row,int col,int rowl,int coll)
    {
        if(index == word.size())
        {
            return true;
        }
        row = row-rowl;
        col = col-coll;
        if(row<0 || col<0 || row>=grid.size() || col>= grid[0].size())
        {
            return false;
        }
        if(word[index] == grid[row][col])
        {
            return found(grid,word,index+1,row,col,rowl,coll);
        }
        return false;
        
    }
    
    vector<vector<int>> searchWord(vector<vector<char>> grid, string word) {
        // Code here
        vector<vector<int>> out;
        bool flag = true;
        for(int i = 0;i<grid.size();i++)
        {
            for(int j = 0;j<grid[0].size();j++)
            {
                if(grid[i][j] == word[0])
                {
                    flag = true;
                    for(int p = -1;p<= 1;p++)
                    {
                        for(int q =-1;q<=1;q++)
                        {
                            if(!(p == 0 && q == 0) && found(grid,word,1,i,j,p,q))
                            {
                                out.push_back({i,j});
                                flag = false;
                                break;
                            }
                            
                        }
                        if(!flag)
                        {
                            break;
                        }
                        
                    }
                }
                
            }
        }
        return out;
        
    }
};