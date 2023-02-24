char nonrepeatingCharacter(string s)
{
    // Your code here
    map<char, int> store;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (store.find(s[i]) != store.end())
        {
            (store.find(s[i]))->second++;
        }
        else
        {
            store.insert(make_pair(s[i], 1));
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (store.find(s[i])->second == 1)
        {
            return s[i];
        }
    }
    return '$';
}