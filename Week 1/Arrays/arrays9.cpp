bool judgeSquareSum(int c)
{
    for (long long i = 0; i * i <= c; i++)
    {
        double rem = sqrt(c - i * i);
        if (trunc(rem) == rem && rem <= c)
        {
            return true;
        }
    }
    return false;
}