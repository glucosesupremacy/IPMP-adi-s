int minimum_difference(vector<int> nums)
{
    // Code here
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int diff = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i + 1] - nums[i] < diff)
        {
            diff = nums[i + 1] - nums[i];
        }
    }
    return diff;
}