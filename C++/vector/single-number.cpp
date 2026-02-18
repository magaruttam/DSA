// Problem:
// We are given an array where every number appears twice,
// except one number that appears only once.
// We need to find that single number.
//
// Idea to Solve:
// Use XOR (^) operator.
// - Same numbers cancel each other (a ^ a = 0)
// - 0 ^ a = a
//
// So if we XOR all elements together,
// the duplicate numbers become 0,
// and only the single number remains.
//
// Steps:
// 1. Initialize result = 0
// 2. Loop through the array
// 3. result = result ^ current number
// 4. Return result

#include<iostream>
#include<vector>
using namespace std;

int findsingle(vector<int> numbers){
    int result = 0;
    for(int number: numbers){
         result ^= number;
    }
    return result;
}

int main(){
vector<int> numbers = {4,3,4,1,2,1,2};
int result = findsingle(numbers);
cout<<result;
}