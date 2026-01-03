// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
        string out;
        s--;
        while(d>0)
        {
            
            if(s>9)
            {
                out.push_back('9');
                s -= 9;
            }
            else
            {
                out.push_back('0' + s);
                s = 0;
            }
            d--;
        }
        reverse(out.begin(),out.end());
        if(out[0] == '9')
        {
            return "-1";
        }
        else
        {
            out[0]++;
        }
        return out;
    }
};