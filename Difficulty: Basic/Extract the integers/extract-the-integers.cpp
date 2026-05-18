vector<string> extractIntegerWords(string s) {
    // code here
    vector<string> out;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            string temp;
            temp.push_back(s[i]);
            i++;
            while(i<s.size() && s[i] >= '0' && s[i] <= '9')
            {
                temp.push_back(s[i]);
                i++;
            }
            out.push_back(temp);
        }
    }
    return out;
}