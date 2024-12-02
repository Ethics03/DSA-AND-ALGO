#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> nums) {
     int i = 1;
     int j = nums[0];
     int k = 1;
     while(i < nums.size()){
       if(nums[i] == j){
         i++;
         continue;
       }
       j = nums[i];
       i++;
       k++;

     }
  return k;

}

int main() {
  vector<int> nums = {1,1,2,3,4,5,5,5,6};
  

  cout << removeDuplicates(nums) << endl;

    return 0;
}
    
