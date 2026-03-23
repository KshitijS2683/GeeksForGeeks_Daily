class Solution {
  public:
    void final(vector<int> &arr,vector<string> &out,string &curr,int index,
    unordered_map<int,string> &inp)
    {
        if(index == arr.size())
        {
            out.push_back(curr);
            return;
            
        }
        else
        {
            for(int i = 0;i<inp[arr[index]].size();i++)
            {
                curr.push_back(inp[arr[index]][i]);
                final(arr,out,curr,index+1,inp);
                curr.pop_back();
            }
            if(inp[arr[index]].size() == 0)
            {
                final(arr,out,curr,index+1,inp);
            }
            
        }
    }
    vector<string> possibleWords(vector<int> &arr) {
        // code here
        vector<string> out;
        string curr = "";
        int index = 0;
        unordered_map<int,string> inp= {
            {1,""},{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"},{0,""}
        };
        
        final(arr,out,curr,index,inp);
        return out;
        
    }
};