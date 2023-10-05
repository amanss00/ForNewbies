class Solution:
    
    #Function to return list of integers that form the boundary 
    #traversal of the matrix in a clockwise manner.
    def BoundaryTraversal(self,matrix, n, m):
        # code here
        res = []
        if(n==1): 
            for i in range(m): res.append(matrix[0][i])
        elif(m==1): 
            for i in range(n): res.append(matrix[i][0]) 
        else:
            for i in range(m): res.append(matrix[0][i])
            for i in range(1,n): res.append(matrix[i][m-1])
            for i in range(m-2,-1,-1): res.append(matrix[n-1][i])
            for i in range(n-2,0,-1): res.append(matrix[i][0])
        return res
