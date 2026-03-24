class Solution {
  public:
    void flood(vector<vector<int>>& image, int sr, int sc,
                                  int newColor,int old)
        {

            image[sr][sc] = newColor;
            if(sr-1 >= 0 && image[sr-1][sc] == old)
            {
                image[sr-1][sc] = newColor;
                flood(image,sr-1,sc,newColor,old);
            }
            if(sr+1 < image.size() && image[sr+1][sc] == old)
            {
                image[sr+1][sc] = newColor;
                flood(image,sr+1,sc,newColor,old);
            }
            if(sc-1 >= 0 && image[sr][sc-1] == old)
            {
                image[sr][sc-1] = newColor;
                flood(image,sr,sc-1,newColor,old);
            }
            if(sc+1 < image[0].size() && image[sr][sc+1] == old)
            {
                image[sr][sc+1] = newColor;
                flood(image,sr,sc+1,newColor,old);
            }
                                      
        }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
                                      
        // code here
        int old = image[sr][sc];
        if(newColor == old)
        {
            return image;
        }
        image[sr][sc] = newColor;
        flood(image,sr,sc,newColor,old);
        return image;
    }
};