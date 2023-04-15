class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>store; //character and its index
        int l = s.length();
        for(int i = 0; i < l; i++){
            char key = s[i];
            if(store.find(key) != store.end()){
                store[key]+=l;
            }else{
                store.insert(make_pair(key,i));
            }
        }
        int min_index = l;
        for(auto it : store){
            if(it.second < min_index){
                min_index = it.second;
            }
        }
        if(min_index == l){
            return -1;
        }else{
            return min_index;
        }
    }
};