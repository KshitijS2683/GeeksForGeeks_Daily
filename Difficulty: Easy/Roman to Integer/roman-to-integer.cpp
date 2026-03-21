class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        unordered_map<char,int> inp = {
            {'I' , 1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int n = s.size();
        int result = 0;
        for(int i = 0;i<n;i++)
        {
            int curr = inp[s[i]];
            int next = (i+1<n)?inp[s[i+1]]:0;
            if(curr<next)
            {
                result -= curr;
            }
            else
            {
                result += curr;
            }
        }
        return result;
        // vector<char> inp = {'I','V','X','L','C','D','M'};
        // int num = 0;
        // int k = s.size()-1;
        // int r = 0;
        // while(k>=0 && r < inp.size()-2)
        // {
        //     int a = 0;
        //     if(s[k] == inp[r])
        //     {
        //         while(k>=0 && s[k] == inp[r])
        //         {
        //             a++;
        //             k--;
        //         }
                
        //     }
        //     else if(k>=0 && s[k] == inp[r+1])
        //     {
        //         if(s[k] == inp[r+1])
        //         {
        //             a += 5;
        //             k--;
        //         }
        //         if(k >= 0 && s[k] == inp[r])
        //         {
        //             a--;
        //             k--;
        //         }
                
        //     }
        //     else if(k>=0 && s[k] == inp[r+2])
        //     {
        //         if(s[k] == inp[r+2])
        //         {
        //             a += 10;
        //             k--;
        //         }
        //         if(k>=0 && s[k] == inp[r])
        //         {
        //             a--;
        //             k--;
        //         }
                
        //     }
        //     num = num*10 + a;
        //     r += 2;
        // }
        // if(k>0)
        // {
        //     num = num*1000 + k;
        // }
        // int out = 0;
        // while(num != 0)
        // {
        //     int a = num%10;
        //     out = out * 10 + a;
        //     num = num/10;
        // }
        // return out;
        
    }
};