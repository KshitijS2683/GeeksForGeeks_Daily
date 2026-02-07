// User function template for C++

class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
        vector<int> out = {a,b,c};
        sort(out.begin(),out.end());
        return out[1];
    }
};