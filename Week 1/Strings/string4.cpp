string reverseWords(string s)
{
    // code here
    vector<string> ans;
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            ans.push_back(temp);
            temp = "";
        }
        else
        {
            temp += s[i];
        }
        if (i == s.length() - 1)
        {
            ans.push_back(temp);
        }
    }
    string res = "";
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        res += ans[i];
        if (i > 0)
        {
            res += ".";
        }
    }
    return res;
}