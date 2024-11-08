#include <bits/stdc++.h>

using namespace std;

string fancyString(string s){
 int i = 1;    
        int count = 1;
        int prev = s[0];
        string ans; 
        if(s.length() < 3){
            return s;
        }
        while(i < s.length()){
            if(s[i] == prev) count++;
            else{
                ans.push_back(s[i-1]);
                if(count >= 2){
                    ans.push_back(s[i-1]);
                }
                count = 1;
            }
            if( i == s.length()-1){
                ans.push_back(s[i]);
                if(count >= 2){
                    ans.push_back(s[i]);
                }
                break;
            }
            prev = s[i];
            i++;
        }
        return ans;
    }

int main() {

  cout << fancyString("leetcode") << endl;

    return 0;
}
    
