#include <bits/stdc++.h>

using namespace std;

string encode(vector<string> strs){
    string s = "";

    for(int i = 0 ; i < strs.size() ; i++){
      s.append(strs[i]);
      s.append("#");
    }

    return s;
}


vector<string> decode(string s){

}


int main() {

vector<string> vec= {"neetcode","real","realest"};

string s = encode(vec);

cout << s;


    return 0;
}
    
