#include <bits/stdc++.h>

using namespace std;

string encode(vector<string> strs){

 //BASICALLY WE TAKE THE SIZE OF EACH STRING IN THE ARRAY AND PUT IT WITH , AS THE DELIMITER 
 //THEN AFTER A # PUT THE STRING TOGETHER
 
    
        if(strs.empty()) return "";
            vector<int> sizes;
            string res = "";
            for(string s : strs){
                sizes.push_back(s.size());
            }

            for(int sz : sizes){
                res += to_string(sz) + ',';
            }
            res += '#';
            for(string s: strs){
                res += s;
            }

    
            return res;
  
  
}


vector<string> decode(string s){

 //TO DECODE WE FIRST CHECK UNTIL THE VALUE OF S[I] == # MEANING TILL NUMBERS
 //THEN IN THAT WHILE WE CHECK FOR EACH , DELIMITER AND WHEN ITS NOT EQUAL 
 //WE JUST ADD THEM IN THE STRING
 //THEN WE PUSHBACK THE SIZE OF EACH VALUE OF THE STRING IN THE PREVIOUS ARRAY IN THE SIZES VECTOR
 //THEN WE TAKE THE SUBSTRING FROM THE MAIN STRING STARTING FROM 0 TILL THE SIZE OF EACH STRING EVERYTIME WE ITERATE AND ADD
 //THE STRING IN THE RESULT 
 //HENCE WE GET THE ANSWER
  if(s.empty()) return {};
            vector<int> sizes;
            vector<string> res;
            int i = 0;
            while(s[i] != '#'){
                string cur = "";
                while(s[i] != ','){
                    cur += s[i];
                    i++;
                }
                sizes.push_back(stoi(cur));
                i++;
            }
            i++;
            for(int sz: sizes){
                res.push_back(s.substr(i,sz));
                i += sz;
            }
            return res;
}


int main() {

vector<string> vec= {"neetcode","real","realest"};

string s = encode(vec);

vector<string> ans = decode(s);

cout << s << endl;

for(int i = 0 ; i < ans.size() ; i++){
  cout << ans[i];
}

    return 0;
}
    
