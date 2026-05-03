class Solution {
  public:
    string isAutomorphic(int n) {
        // code here
        int sq = n*n;
        string n1 = to_string(n),n2 = to_string(sq);
        int i = n1.size()-1,j=n2.size()-1;
        while(i >= 0)
        {
            if(n1[i--] != n2[j--])
            {
                return "Not Automorphic";
            }
        }
        return "Automorphic";
    }
};