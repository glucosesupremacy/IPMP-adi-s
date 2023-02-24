#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter string : ";
    cin >> s;
    map<char,int>store;
    for(int i = 0; i < s.length(); i++){
        if(store.find(s[i]) != store.end()){
            store.find(s[i]) -> second++;
        }else{
            store.insert(make_pair(s[i],1));
        }
    }
    for(auto it : store){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}