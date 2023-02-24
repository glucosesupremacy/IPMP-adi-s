#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    vector<int>arr = {12,234,2125,454,7653,1,1,3,4,3};
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}