/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        string inp = to_string(n);
        int out = 0;
        for(int i = 0;i<inp.size();i++)
        {
            if(inp[i] == '0')
            {
                inp[i] = '5';
            }
            out = out*10 + (inp[i]-'0');
            
        }
        
        return out;
    }
};