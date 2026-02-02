class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // code here
        // string aa = "";
        // string bb="";
        // while(a>0)
        // {
        //     int rem = a%2;
        //     aa += ('0' + rem);
        //     a = a/2;
        // }
        
        // while(b>0)
        // {
        //     int rem = b%2;
        //     bb += ('0' + rem);
        //     b = b/2;
        // }
        
        // string temp = "";
        
        // if(aa.size() < bb.size())
        // {
        //     int k = bb.size() - aa.size();
        //     while(k>0)
        //     {
        //         temp += '0';
        //         k--;
        //     }
        //     temp += aa;
        //     aa = temp;
        // }
        // temp = "";
        // if(aa.size() > bb.size())
        // {
        //     int k = aa.size() - bb.size();
        //     while(k>0)
        //     {
        //         temp += '0';
        //         k--;
        //     }
        //     temp += bb;
        //     bb = temp;
        // }
        // int count = 0;
        // for(int i = 0;i<aa.size();i++)
        // {
        //     if(aa[i] != bb[i])
        //     {
        //         count++;
        //     }
        // }
        // return count;
        
        int x = a^b;
        int count = 0;
        while(x)
        {
            count += x&1;
            x>>=1;
        }
        return count;
        
    }
};