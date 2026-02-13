// User function Template for C++
class Solution {
  public:
    bool isVowel(char c)
    {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    void generate(int index,string S,string cur,set<string> &out)
    {
        if(index == S.size())
        {
            if(!cur.empty() && isVowel(cur.front()) && !isVowel(cur.back()))
            {
                out.insert(cur);
            }
            return;
        }
        generate(index+1,S,cur + S[index],out);
        generate(index+1,S,cur,out);
        
    }
    set<string> allPossibleSubsequences(string S) {
        // code here
        set<string> out;
        string cur = "";
        generate(0,S,cur,out);
        return out;
    //     set<string> out;
    //     for(int i = 0;i<S.size()-1;i++)
    //     {
    //         if(S[i] == 'a'||S[i] == 'e' || S[i] == 'i' || 
    //         S[i] == 'o' || S[i] == 'u')
    //         {
    //             for(int j = i+1;j<S.size();j++)
    //             {
    //                 if(S[j] != 'a'&& S[j] != 'e' && S[j] != 'i' && 
    //                 S[j] != 'o' && S[j] != 'u')
    //                 {
    //                     out.insert(S.substr(i,j-i+1));
                        
    //                 }
    //             }
                
    //         }
            
    //     }
    //     set<string> output;
    //     for(auto &x : out)
    //     {
    //         output.insert(x);
    //         if(x.size() > 2)
    //         {
    //             for(int i = 1;i<x.size()-1;i++)
    //             {
    //                 for(int j = 1;j<x.size()-i;j++)
    //                 {
    //                     string temp = x;
    //                     temp.erase(j,i);
    //                     output.insert(temp);
    //                 }
    //             }
    //         }
    //     }
    //     return output;
    // }
    }
};