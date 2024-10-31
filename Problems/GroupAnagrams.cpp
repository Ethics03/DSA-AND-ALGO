#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagram(vector<string> strs){
  
  unordered_map<string,vector<string>> hashmap;

  int n = strs.size();

  string temp;

  for(int i = 0 ; i < n ; ++i){
    temp = strs[i];
    sort(strs[i].begin() , strs[i].end());
    hashmap[strs[i]].push_back(temp);  //pushing sorted string as the key and the original string as the value
  }
  vector<vector<string>> result; //result vector

  for(const auto pair : hashmap) 
    result.push_back(pair.second);  
           
  return result;
}

int main() {

  vector<string> str = {"act","pots","tops","cat","stop","hat"};

  vector<vector<string>> ans = groupAnagram(str);
  
  for(int i = 0 ; i < ans.size(); i++){
    for(int j = 0 ; j < ans[i].size() ; j++){
      cout << ans[i][j] << endl;
    }
  }


    return 0;
}
    
