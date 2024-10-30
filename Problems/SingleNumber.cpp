#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //in this problem XOR operator basically returns bit 1 if both binary differ
        //and returns 0 if both are same
        //so by making a varible and keep using xor operator on elements 
        //basically a number XORed to itself returns bit 0 meaning cancels 
        //so we keep using XOR all the duplicate elements will cancel each other
        //leaving only the one which is unique
        //thats why we use XOR operator
        int a = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            a =  a^nums[i];
        }
        return a;
    }
};

int main() {
  
    return 0;
}
    
