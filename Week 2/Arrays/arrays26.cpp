vector<int> arr;
vector<int> souffle;
Solution(vector<int> &nums)
{
    arr = nums;
    souffle = nums;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
vector<int> reset()
{
    souffle = arr;
    return souffle;
}
vector<int> shuffle()
{
    srand(time(NULL));
    int n = souffle.size();
    int targ;
    for (int i = n - 1; i > 0; i--)
    {
        targ = rand() % (i);
        swap(souffle[i], souffle[targ]);
    }
    return souffle;
}