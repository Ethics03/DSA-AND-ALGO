#include <bits/stdc++.h>

using namespace std;

class Solution{
  
  void allPos(string& s,int pos , int& maxCount, unordered_set<string>& uniqueSub){
    
    if(pos == s.size()){
      if(maxCount < uniqueSub.size())
        maxCount = uniqueSub.size();
      return;
    }

      string substr;

      for(int i = pos ; i < s.size() ; ++i){
        substr.push_back(s[i]);

        if(uniqueSub.count(substr) == 0){
          uniqueSub.insert(substr);
          allPos(s,i+1,maxCount,uniqueSub);
          uniqueSub.erase(substr);
        }
      }



  }

public: 
  int maxUniqueSplit(string s){
    int maxCount = 0;
    unordered_set<string> uniqueSub;
    allPos(s,0,maxCount,uniqueSub);
    return maxCount;
     
  }

};

int main() {

Solution sol1;

cout << sol1.maxUniqueSplit("aabbc") << endl;

  

  return 0;
}
    
