#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void merge(int arr[],int l,int m,int r){
    int left = l;
    int right = r;
    int mid = m+1;
    vector<int>temp;
    while(left < m+1 && mid <= r){
        if(arr[left] < arr[mid]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[mid]);
            mid++;
        }
    }
    while(left < m+1){
        temp.push_back(arr[left]);
        left++;
    }
    while(mid <= r){
        temp.push_back(arr[mid]);
        mid++;
    }
    for(auto it : temp){
        arr[l] = it;
        l++;
    }
}
void mergesort(int arr[],int l,int r){
    if(l < r){
        int m  = (l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main(){
    int arr[] = {12,345,23,78,123,345,5,767,86865,45};
    int n = 10;
    mergesort(arr,0,n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}