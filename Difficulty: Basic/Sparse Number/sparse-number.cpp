class Solution {
  public:
    bool isSparse(int n) {
        // code here
        string binary;
        
        while(n>0)
        {
            binary.push_back(n%2 + '0');
            n = n/2;
        }
        for(int i = 0;i<binary.size()-1;i++)
        {
            if(binary[i] == '1' && binary[i+1] == '1')
            {
                return false;
            }
        }
        return true;
    }
};