#include <bits/stdc++.h>

using namespace std;


bool isIso(string s, string t){
   unordered_map<char,int>map1;
        unordered_map<char,int>map2;

        for(int i=0; i < s.length();i++){
            if(map1.find(s[i]) == map1.end()){
                map1[s[i]] = i;
            }
            if(map2.find(t[i]) == map2.end()){
                map2[t[i]] = i;
            }
            if(map1[s[i]] != map2[t[i]]){ //this condition checks if both indices already exited in the map 
                                          //and if they did the index of both  of them should be same currently
                                          //if they both existed but indices are different then false
                return false;
            }
        }
        return true;
}


int main() {

  bool ans = isIso("a","a");

  cout << ans;

    return 0;
}
    
