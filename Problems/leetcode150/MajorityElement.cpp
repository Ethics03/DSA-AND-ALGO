#include <bits/stdc++.h>

using namespace std;


 int majorityElement(vector<int> nums) {
          
          unordered_map<int,int> myhash;

          int count = 0;
          int val = 0;
          for(int n : nums){
            myhash[n] = 1+myhash[n];
            if(myhash[n] > count){
              val = n;
              count = myhash[n];
            }
          }
          
    return val; 
          
}



int main() {
    
  vector<int> nums = {1,2,2,2,3};

  cout << majorityElement(nums) << endl;
  
    return 0;
}
    
