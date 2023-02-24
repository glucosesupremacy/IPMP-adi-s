#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr = {7, 9, 5, 6, 3, 2};
    int n = arr.size();
    int min = INT_MAX;
    int max_diff = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }else{
            int diff = arr[i] - min;
            if(diff > max_diff){
                max_diff = diff;
            }
        }
    }
    cout << max_diff << endl;
    return 0;
}
