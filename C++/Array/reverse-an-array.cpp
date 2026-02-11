/*
Problem Statement
You are given an array of numbers. Your task is to reverse the elements of the array.
Original array: [1, 2, 3, 4, 5]
Reversed array: [5, 4, 3, 2, 1]

I am using here two-pointer approach
// Two-Pointer Approach to reverse an array:
// 1. Initialize two pointers: start = 0, end = n-1
// 2. Swap elements at start and end
// 3. Move start forward and end backward
// 4. Repeat until start >= end
// This reverses the array in place with O(n) time and O(1) space
*/

#include<iostream>
using namespace std;

void reversearray(int numbers[],int n){
    int start = 0;
    int end = n - 1;

    while (start < end){
        swap(numbers[start],numbers[end]);
        start +=1;
        end -=1;
    }
}
//show the array
void showarray(int numbers[],int n){
    for(int i=0; i<n;i++){
        cout<<numbers[i]<<" ";
    }
}

int main(){
 int numbers[] = {1,2,3,4,5};
 int n = sizeof(numbers)/sizeof(numbers[0]);

 cout<<"Before Reverse"<<endl;
 showarray(numbers,n);
 cout<<endl;
 cout<<"After Reverse"<<endl;
 reversearray(numbers,n);
 showarray(numbers,n);

    return 0;
}
