#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l-1;
    for(int j = l; j < r; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    //now i is at the last element which is smaller than the pivot
    swap(arr[i+1],arr[r]);
    return i+1;
}
void quicksort(int arr[],int l,int r){
    if(l < r){
        int pi  = partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}
int main(){
    int arr[] = {12,345,23,78,123,345,5,767,86865,45};
    int n = 10;
    quicksort(arr,0,n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}