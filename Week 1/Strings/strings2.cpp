void permute(string S, string ans, set<string> &soln)
{
    if (S.length() == 0)
    {
        soln.insert(ans);
        return;
    }
    for (int i = 0; i < S.length(); i++)
    {
        char c = S[i];
        string l = S.substr(0, i);
        string r = S.substr(i + 1);
        string rem = l + r;
        permute(rem, ans + c, soln);
    }
}

vector<string> find_permutation(string S)
{
    vector<string> res;
    set<string> soln;
    string ans = "";
    permute(S, ans, soln);
    for (auto it : soln)
    {
        res.push_back(it);
    }
    return res;
}