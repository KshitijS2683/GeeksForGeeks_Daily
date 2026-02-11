// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        vector<map<int,int>> inp(arr.size());
        vector<vector<string>> out;
        for(int i = 0;i<arr.size();i++)
        {
            for(int j = 0;j<arr[i].size();j++)
            {
                inp[i][arr[i][j]]++;
            }
        }
        vector<int> visited(arr.size(),0);
        for(int i = 0;i<inp.size();i++)
        {
            vector<string> temp;
            if(visited[i] == 0)
            {
                for(int j = i;j<inp.size();j++)
                {
                    if(inp[i] == inp[j])
                    {
                        visited[j] = 1;
                        temp.push_back(arr[j]);
                    }
                    
                }
                out.push_back(temp);
                
            }
        }
        return out;
    }
};