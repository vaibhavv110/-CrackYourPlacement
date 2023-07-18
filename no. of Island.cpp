class Solution {
  public:
    // Function to find the number of islands.
      void numIslandsVisit(vector<vector<char>>& grid,int i,int j,int n,int m,vector<vector<int>> &vis)

    {

        if (i<0 || i>=n || j<0 || j>=m)

        {

            return;

        }

        if (grid[i][j] != '1')

        {

            return;

        }

        grid[i][j] = '2';

        numIslandsVisit(grid,i+1,j,n,m,vis);

        numIslandsVisit(grid,i+1,j+1,n,m,vis);

        numIslandsVisit(grid,i+1,j-1,n,m,vis);

        numIslandsVisit(grid,i,j-1,n,m,vis);

        numIslandsVisit(grid,i,j+1,n,m,vis);

        numIslandsVisit(grid,i-1,j-1,n,m,vis);

        numIslandsVisit(grid,i-1,j,n,m,vis);

        numIslandsVisit(grid,i-1,j+1,n,m,vis);

    }

    int numIslands(vector<vector<char>>& grid) {

        // Code here

        int n = grid.size();

        int m = grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));

        int count = 0;

        for(int i = 0; i<n; i++)

        {

            for(int j = 0; j<m; j++)

            {

                if(grid[i][j] == '1')

                {

                    numIslandsVisit(grid,i,j,n,m,vis);

                    count += 1;

                }

            }

        }

        return count;

    }
};
