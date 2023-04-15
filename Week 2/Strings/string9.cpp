int myAtoi(string s)
{
    int l = s.length();
    int sign = 1;
    int i = 0;
    while (s[i] == ' ')
    {
        i++;
    }
    if (s[i] == '+')
    {
        sign = 1;
        i++;
    }
    else if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    string res = "";
    while (s[i] >= '0' && s[i] <= '9')
    {
        res += s[i];
        i++;
    }
    l = res.length();
    long long ans = 0;
    for (int j = 0; j < l; j++)
    {
        ans += res[j] - '0';
        if (ans > pow(2, 31) - 1)
        {
            break;
        }
        else if (ans < -pow(2, 31))
        {
            break;
        }
        if (j == l - 1)
        {
            break;
        }
        ans *= 10;
    }
    long long num = (ans * sign);
    if (num > pow(2, 31) - 1)
    {
        num = pow(2, 31) - 1;
    }
    else if (num < -pow(2, 31))
    {
        num = -pow(2, 31);
    }
    return num;
}