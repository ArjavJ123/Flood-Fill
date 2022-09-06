class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] != color) {
            int c=  image[sr][sc];
            helper(image, sr, sc,c, color);
        }
        return image;
    }
    void helper(vector<vector<int>>& image, int i, int j,int c, int color) {
        if(image[i][j] == c) {
            image[i][j] = color;
            if(i > 0) {
                helper(image, i-1, j,c,color);
            }
            if(j>0) {
                helper(image, i, j-1,c, color);
            }
            if( i< image.size()-1) {
                helper(image, i+1, j,c, color);
            }
            if(j<image[0].size()-1) {
                helper(image,i,j+1,c, color);
            }
        }
    }
};
