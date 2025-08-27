#include <bits/stdc++.h>
using namespace std;


  //APPROACH : NEGATIVE MARKING FOR o(1) space 
    //COULDVE USED HASH SET BUT O(n)
    // Basically mark the visited index as negative 
    //if that number comes again -> its index will be (num[i])-1
    //we already marked it as negative -> if nums[i] is already negative
    //then means that the number is repeated -> return that number

    // eg: 1 2 3 4 5 5 6 
    // -1 -2 -3 -4 -5 5 6
    // when reaching duplicate 5 -> idx is 5-1 -> 4 now nums[i] = -5 -> negative so repeated.
   
    int findDuplicate(vector<int> nums) {
        for(int num: nums){
            int idx = abs(num) - 1;
            if(nums[idx] < 0){
                return abs(num);
            }
            nums[idx]  *= -1;
    }
    return -1;
    }

int main() {
    vector<int> nums = {1,2,3,4,5,5,6};
    int ans = findDuplicate(nums);
    cout << ans << endl;
    return 0;
}


    
