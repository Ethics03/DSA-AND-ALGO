#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,ans=0;
  
  string s[150];

  cin >> n;

  for(int i = 0 ;  i < n ; i++){
    cin >> s[i];
  }

  for(int i = 0 ; i < n ; i++){
    if(s[i] == "X++" || s[i] == "++X"){
        ans++;
    }
    else if(s[i] == "X--" || s[i] == "--X"){
      ans--;
    }
  }

  cout << ans;

    return 0;
}
    
