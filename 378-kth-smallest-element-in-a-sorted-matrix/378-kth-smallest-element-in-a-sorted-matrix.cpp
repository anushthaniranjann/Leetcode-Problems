class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector <int> res;
        for( int i=0; i< r;i++){
            for( int j =0; j<c; j++){
               res.push_back(matrix[i][j]); 
            }
        } 
        sort(res.begin(), res.end());
        return res[k-1];
    }
};