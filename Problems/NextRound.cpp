#include <bits/stdc++.h>

using namespace std;

int main() {
  int  n , k, ans = 0;
  int vals[50];
  cin >> n >> k;

  
  for(int i = 0 ; i < n ; i++){
     cin >> vals[i];
  }

  for(int i=0 ; i < n ; i++){
    if(vals[i] >= vals[k-1] && vals[i] > 0) {
        ans++;
    }
      
  }

  cout << ans;
  

  
  return 0;
}
    
