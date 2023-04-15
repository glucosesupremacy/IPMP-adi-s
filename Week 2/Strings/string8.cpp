string encode(string src)
{
    // Your code here
    string res = "";
    int l = src.length();
    if (l == 1)
    {
        res += src[0];
        res += '0' + 1;
        return res;
    }
    for (int i = 0; i < l - 1; i++)
    {
        int c = 1;
        while (i < l - 1 && src[i] == src[i + 1])
        {
            c++;
            i++;
        }
        res += src[i];
        res += '0' + c;
        if (i == l - 2 && src[i] != src[i + 1])
        {
            res += src[i + 1];
            res += '0' + 1;
        }
    }
    return res;
}