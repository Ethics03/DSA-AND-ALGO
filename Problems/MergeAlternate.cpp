#include <bits/stdc++.h>

using namespace std;


// using 2 pointers each for one array
// using the fact that size of both can be same or one can be bigger 
// we enter the elements depending on the size too
//


string mergealt(string word1 , string word2){

  int p1 = word1.size();
  int p2 = word2.size();
  string ans;

  for(int i = 0 ; i < p1 || i < p2 ; ++i){
    if(i < p1) ans += word1[i];
    if(i < p2) ans += word2[i];

  }
      return ans;
}


int main() {
    

  cout << mergealt("abc","pqr") << endl;

  //OUTPUT : apbqcr
    return 0;
}
    
