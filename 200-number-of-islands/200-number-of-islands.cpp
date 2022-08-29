class Solution {
public:
   
     void connected(int i, int j, vector<vector < char>> &grid)
    {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != '1')           return;
        grid[i][j] = '2';
        connected(i + 1, j, grid);
        connected(i - 1, j, grid);
        connected(i, j + 1, grid);
        connected(i, j - 1, grid);
    }
     int numIslands(vector<vector < char>> &grid){
    int ans = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == '1')
            {
                connected(i, j, grid);
                ans++;
            }
        }
    }
    return ans;
} 

};