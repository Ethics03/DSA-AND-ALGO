#include <bits/stdc++.h>

using namespace std;


//USING LEFT AND RIGHT POINTER

//WHILE LOOP FOR I < J 

//GET THE SUM VALUE FOR EACH ITERATION

//CHECKING IF SUM == TARGET 

//WE PRINT {i+1,j+1}

//else if sum < target -> we increment i by 1
//else we increment j by 1
//
//return {} anyway if empty array








vector<int> twoSum(vector<int> numbers, int target) {

         if(numbers.size() == 0) return {};
        int i = 0;
        int j = numbers.size()-1;
        
       
        while(i < j){
            int sum = numbers[i] + numbers[j];
            if(sum == target){
                return {i + 1, j + 1};;   
            }
            else if(sum < target){
                i++;
            }
           else{
            j--;
           }

    }
    
    return {};
    }



int main() {
    
vector<int>  arr = {1,2,3,4,5,6};
int target = 6;
vector<int> ans = twoSum(arr,target);
for(int i = 0 ; i < 2 ; i++){
  cout << ans[i] << " ";
}


    return 0;
}
    
