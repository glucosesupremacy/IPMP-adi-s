#include <bits/stdc++.h>
using namespace std;
void recur(string s){
    if(s.length()==1){
        cout << s;
        return;
    }
    recur(s.substr(1));
    cout << s[0];
}
int main(){
    string s;
    cout << "Enter string : ";
    cin >> s;
    recur(s);
    return 0;
}