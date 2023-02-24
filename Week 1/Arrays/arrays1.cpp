#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr1[] = {1,2,3,4,5,6,7,8,9};
	int arr2[] = {3,4,7,11,13};
	set<int>store;
	for(int i = 0; i < 9; i++){
		store.insert(arr1[i]);
	}
	//intersection
	cout << "Intersection is : ";
	for(int j = 0; j < 5; j++){
		if(store.find(arr2[j]) != store.end()){
			cout << arr2[j];
		}
	}
	cout << endl;
	//union
	for(int j = 0; j < 5; j++){
		store.insert(arr2[j]);
	}
	cout << "Union is : ";
	for(auto it : store){
		cout << it; 
	}
	cout << endl;
	return 0;
}