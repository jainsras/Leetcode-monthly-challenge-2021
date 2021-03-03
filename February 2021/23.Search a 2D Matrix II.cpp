class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size(), m= matrix[0].size();
        if(target<matrix[0][0]|| target>matrix[n-1][m-1])return 0;
		else
		{
		    int i=0,j=m-1;
		    while(i<n && j>=0)
		    {
		        if(target==matrix[i][j]){return 1;}
		        else if(target<matrix[i][j])j--;
		        else i++;
		        
		    }
		    return 0;
		}
    }
};
