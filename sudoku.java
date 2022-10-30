class Solution

{

    static boolean isSafe(int row,int col,int val,int[][] grid)

    {

        for(int i=0;i<9;i++)

        {

            if(grid[row][i]==val)

            {

                return false;

            }

            if(grid[i][col]==val)

            {

                return false;

            }

            if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==val)

            {

                return false;

            }

        }

        return true;

    }

    static boolean solve(int[][] grid)

    {

        for(int i=0;i<9;i++)

        {

            for(int j=0;j<9;j++)

            {

                if(grid[i][j]==0)

                {

                    for(int val=1;val<=9;val++)

                    {

                        if(isSafe(i,j,val,grid))

                        {

                            grid[i][j]=val;

                            if(solve(grid))

                            {

                                return true;

                            }

                            grid[i][j]=0;

                        }

                    }

                    return false;

                }

            }

        }

        return true;

    }

    

    static boolean SolveSudoku(int grid[][])

    {

        

        return solve(grid);

    }

    



    static void printGrid (int grid[][])

    {



        for(int i=0;i<9;i++)

        {

            for(int j=0;j<9;j++)

            {

                System.out.print(grid[i][j]+" ");

            }

        }

    }

}
