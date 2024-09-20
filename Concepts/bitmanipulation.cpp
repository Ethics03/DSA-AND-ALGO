#include<bits\stdc++.h>

using namespace std;
int getBit(int n , int pos){
  //getbit is basically if you lshift 1 by 2 and then you do & operation with the
  //original bit then we get if the bit is one or not
  //basically getting and checking if the bit is 1 or not
  return ((n & (1<<pos))!=0);

}

int setBit(int n,int pos){

/* for setting the bit */ 
  /* use an or with the shift and the value to set that bit */
  return (n | (1<<pos));
}

int clearBit(int n , int pos){
  /* clearing a bit is basically clearing the bit to 0 */
  int mask = ~(1<<pos);
  return n & mask;
}

int updateBit(int n , int pos, int value){
  /* updating is basically for updating a bit with a specific value 1 or 0 */
     int mask = ~(1<<pos);
     n = n & mask;
    return(n | (value<<pos));
       

 
}

int main(){

  /* cout << getBit(5,2) << endl; */
 /* cout << setBit(5,1) << endl; */
 /* cout << clearBit(5,2) << endl; */
  cout << updateBit(5,1,1);

  return 0;
}
