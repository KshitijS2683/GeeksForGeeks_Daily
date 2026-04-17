// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        // Your code goes here
        string out;
        for(int i = 0;i<s.size();i++)
        {
            if(!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||s[i] == 'u'))
            {
                out.push_back(s[i]);
            }
        }
        return out;
    }
};