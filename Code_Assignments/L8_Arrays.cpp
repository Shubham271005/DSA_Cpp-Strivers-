//1. WAF to calculate sum and prouct of all numbers in an array

//2. WAF to swap the max and min number of an array 

//3. WAF to print all the unique values in an array

//4. WAF to print intersection of 2 arrays.
-------------
-------------
2.
#include<iostream>
using namespace std;
int main(){
      int arr[5]={1,2,3,4,5};
      int maxVal = arr[0];
      int minVal = arr[0];
      int maxIndex = 0;
      int minIndex = 0;
      for(int i=0;i<5;i++){
            if(arr[i]>maxVal){
                  maxVal = arr[i];
                  maxIndex = i;
            }
            if(arr[i]<minVal){
                  minVal = arr[i];
                  minIndex = i;
            }
            swap(arr[maxIndex],arr[minIndex]);
      }
      for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
      }
  return 0;
}
---------------
---------------

