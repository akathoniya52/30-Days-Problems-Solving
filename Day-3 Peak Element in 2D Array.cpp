class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& g) {
        int ansRow=-1, ansCol = -1, n=g.size(), m = g[0].size();
    int ansMax = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(ansMax<g[i][j]){
                ansMax = g[i][j];
                ansRow = i;
                ansCol = j;
            }
        }
    }

    return {ansRow,ansCol};
    }
};
