class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       int n=mat.size();
    int m=mat[0].size();
    int tot=m*n;
    
    if(r*c!=tot) return mat;
    vector<vector<int>> a(r,vector<int>(c,0));
    vector<int> f;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            f.push_back(mat[i][j]);
        }
    }
    int k=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j]=f[k];
            k++;
        }
    }
    return a;

    }
};