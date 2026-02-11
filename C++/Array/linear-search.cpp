/*
Problem:
Search for a given value in an array using Linear Search.
       numbers[] = {3,6,7,12,31,23,15,5}
       target = 23

Logic:
- Start from the first element of the array
- Compare each element with the target value
- If a match is found, return the index
- If the end of the array is reached and no match is found, return -1

Why this works:
Linear search checks elements one by one, so it guarantees finding the value if it exists.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;

int linearSearch(int numbers[],int target,int n){
  for (int i = 0; i < n; i++){
    if (numbers[i] == target){
        return i;
    }
  }
  return -1;
}

int main(){
  int numbers[] = {3,6,7,12,31,23,15,5};
  int target = 23;

  int n = sizeof(numbers)/sizeof(numbers[0]);
   
  int result =  linearSearch(numbers,target,n);
  cout<<"Index:"<<result<<endl;

    return 0;
}