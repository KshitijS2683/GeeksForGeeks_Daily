class Solution {
  public:

    void generate(string &s, string curr, set<string> &out)
    {
        if(s.empty())
        {
            out.insert(curr);
            return;
        }

        for(int i = 0; i < s.size(); i++)
        {
            string a(1, s[i]);

            string c =
                s.substr(0,i) +
                s.substr(i+1);

            generate(c, curr + a, out);
        }
    }

    vector<string> findPermutation(string &s) {

        set<string> out;

        generate(s, "", out);

        return vector<string>(out.begin(), out.end());
    }
};