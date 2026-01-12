class Solution {
  public:
    string chooseandswap(string str) {
        // Code Here
        // int s = 0;
        // set<char> inp;
        // for(int i = 0;i<str.size()-1;i++)
        // {
        //     if(str[i] > str[i+1] && inp.count(str[i+1]) == 0)
        //     {
        //         s = i;
        //         break;
        //     }
        //     inp.insert(str[i]);
            
        // }
        // char start = str[s];
        // char min = '{';
        // for(int i = s+1;i<str.size();i++)
        // {
        //     if(str[i] < min && inp.count(str[i]) == 0)
        //     {
        //         min = str[i];
        //     }
        // }
        // for(int i = 0;i<s;i++)
        // {
        //     if(str[i] < start && str[i] > min)
        //     {
        //         start = str[i];
        //     }
        // }
        // if(min == '{')
        // {
        //     return str;
        // }
        // for(int i = 0;i<str.size();i++)
        // {
        //     if(str[i] == start)
        //     {
        //         str[i] = min;
        //     }
        //     else if(str[i] == min)
        //     {
        //         str[i] = start;
        //     }
        // }
        // return str;
        string s = str,temp = str;
        char first = '-',second='-';
        sort(s.begin(),s.end());
        vector<int> seen(26,0);
        int i = 0,j=0;
        
        while(i<str.size() && j<str.size())
        {
            if(str[i] == s[j])
            {
                seen[str[i]-'a'] = 1;
                i++;
                j++;
            }
            else if(seen[s[j]-'a'])
            {
                j++;
            }
            else if(seen[str[i]-'a'])
            {
                i++;
            }
            else
            {
                if(str[i] > s[j])
                {
                    first = str[i];
                    second = s[j];
                    break;
                }
                else
                {
                    i++;
                }
            }
        }
        if(second != '-')
            {
                for(int k = 0;k<str.size();k++)
                {
                    if(temp[k] == first)
                    {
                        temp[k] = second;
                    }
                    else if(temp[k] == second)
                    {
                        temp[k] = first;
                    }
                 }
                
            }
        return temp;
        
    }
};
