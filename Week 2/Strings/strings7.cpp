class Solution
{
public:
    long long fact(int n)
    {
        if (n <= 1)
        {
            return 1;
        }
        else
        {
            return n * fact(n - 1);
        }
    }
    long long findRank(string str)
    {
        // code here
        int l = str.length();
        long long rank = 0;
        set<char> store;
        // for each letter
        // find the number of letter that are smaller than it and present in the string
        // let its position be k
        // it contributes (no. of smaller letters) * (k-1)! to the rank
        // repeat for all letters
        for (auto it : str)
        {
            store.insert(it);
        }
        for (int i = 0; i < l; i++)
        {
            char key = str[i];
            int c = 0;
            for (int j = 'a' - 0; j < key - 0; j++)
            {
                if (store.find(char(j)) != store.end())
                {
                    c++;
                }
            }
            rank += c * fact(l - i - 1);
            store.erase(key);
        }
        return rank + 1;
    }
};