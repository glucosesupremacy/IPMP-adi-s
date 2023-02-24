string Solution::solve(string arr)
{
    int n = arr.length();
    int pal = 1;
    int not9 = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            pal = 0;
        }
    }
    if (pal == 1)
    { // palindrome
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != '9')
            {
                not9 = 1;
            }
        }
    }
    if (pal == 1 && not9 == 0)
    { // cat 1
        string res = "1";
        for (int i = 0; i < n - 1; i++)
        {
            res += "0";
        }
        res += "1";
        return res;
    }
    else if (pal == 1)
    { // cat 3
        if (n % 2 == 0)
        {
            int r = n / 2;
            int l = n / 2 - 1;
            while (l >= 0 && r < n && arr[l] == arr[r] && arr[l] == '9')
            {
                arr[l] = '0';
                arr[r] = '0';
                l--;
                r++;
            }
            int lv = int(arr[l]);
            int rv = int(arr[r]);
            arr[l] = char(lv + 1);
            arr[r] = char(rv + 1);
            return arr;
        }
        else
        {
            int r = n / 2;
            int l = n / 2;
            if (arr[r] != '9')
            {
                int rv = int(arr[r]);
                arr[r] = char(rv + 1);
                return arr;
            }
            else
            {
                arr[r] = '0';
                r++;
                l--;
                while (l >= 0 && r < n && arr[l] == arr[r] && arr[l] == '9')
                {
                    arr[l] = '0';
                    arr[r] = '0';
                    l--;
                    r++;
                }
                int lv = int(arr[l]);
                int rv = int(arr[r]);
                arr[l] = char(lv + 1);
                arr[r] = char(rv + 1);
                return arr;
            }
        }
    }
    else
    { // cat 2
        int l;
        int r;
        if (n % 2 == 0)
        {
            l = n / 2 - 1;
            r = n / 2;
            while (arr[l] == arr[r])
            {
                l--;
                r++;
            }
        }
        else
        {
            l = n / 2 - 1;
            r = n / 2 + 1;
            while (arr[l] == arr[r])
            {
                l--;
                r++;
            }
        }
        int mark = 0;
        if (char(arr[l]) > char(arr[r]))
        { // only flip
            mark = 0;
        }
        else
        { // flip and algo
            mark = 1;
        }
        for (int i = 0; i < n / 2; i++)
        {
            arr[n - i - 1] = arr[i];
        }
        if (mark == 0)
        {
            return arr;
        }
        if (mark == 1)
        {
            if (n % 2 == 0)
            {
                r = n / 2;
                l = n / 2 - 1;
                while (l >= 0 && r < n && arr[l] == arr[r] && arr[l] == '9')
                {
                    arr[l] = '0';
                    arr[r] = '0';
                    l--;
                    r++;
                }
                int lv = int(arr[l]);
                int rv = int(arr[r]);
                arr[l] = char(lv + 1);
                arr[r] = char(rv + 1);
                return arr;
            }
            else
            {
                r = n / 2;
                l = n / 2;
                if (arr[r] != '9')
                {
                    int rv = int(arr[r]);
                    arr[r] = char(rv + 1);
                    return arr;
                }
                else
                {
                    arr[r] = '0';
                    r++;
                    l--;
                    while (l >= 0 && r < n && arr[l] == arr[r] && arr[l] == '9')
                    {
                        arr[l] = '0';
                        arr[r] = '0';
                        l--;
                        r++;
                    }
                    int lv = int(arr[l]);
                    int rv = int(arr[r]);
                    arr[l] = char(lv + 1);
                    arr[r] = char(rv + 1);
                    return arr;
                }
            }
        }
    }
}
