#include <bits/stdc++.h>

using namespace std;

vector<int> productself(vector<int> nums){


   vector<int> ans(nums.size(),1);
        
        vector<int> leftprod(nums.size(),1);
        vector<int> rightprod(nums.size(),1);
        
        for(int i = 1 ; i < nums.size() ; i++){
                   
                    leftprod[i] = leftprod[i-1]*nums[i-1];
        }

        for(int j = nums.size()- 2 ; j >= 0 ; j--){
          
          rightprod[j] = rightprod[j+1]*nums[j+1];

        }

    


        for(int i = 0 ; i < nums.size() ; i++){
          ans[i] = leftprod[i]*rightprod[i];
        }



return ans;

}


int main() {

vector<int> num = {1,2,3,4};
vector<int> ans = productself(num);

for(int i = 0 ; i < ans.size() ; i++){
  cout << ans[i] << " ";
}

  return 0;
}
    
