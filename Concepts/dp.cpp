#include <bits/stdc++.h>

using namespace std;

int climb(int n){


  //SO HERE FOR THE CLIMBING STAIRS PROBLEM
  //USING AN ARRAY TO MEMORIZE THE VALUE OF EACH TEST CASE BEFORE THE 
  //SAID TEST CASE SO THAT WE DONT HAVE TO COMPUTE IT AGAIN AND AGAIN
  //THEN LOOPING THROUGH IT AFTER GIVING BASE TEST VALUES FOR INDEX 1,2
  //THEN CALCULATING THE CURRENT N INDEX AND SENDING VALUE


  int a[n+1];
  if(n<=2){
    return n;
  }
  a[1] = 1;
  a[2] = 2;
  for(int i = 3 ; i < n+1; i++){
      a[i] = a[i-1]+a[i-2];
  }
return a[n];
}




int main() {
    //DYNAMIC CONCEPTS - > BOTTOM-UP , RECURSION , MEMOIZATION
      cout << climb(5);

    
    return 0;
}
    
