#include <bits/stdc++.h>

using namespace std;

bool isSubsequence(string s, string t) {
       int ind1 = t.find(s[0]);
        int j = t.length()-1;

        while(j >=ind1+s.length()-1){
            if(t[j] == s[s.length()-1]){
                return true;
            }
            j--;
        }
        return false;
     
    }



int main() {

cout << isSubsequence("abc","ahbgdc") << endl;
  

    return 0;
}
    
