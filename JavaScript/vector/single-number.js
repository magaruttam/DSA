// Solution Approach:
// We use the XOR (^) bitwise operator.
// Key Properties:
// 1. a ^ a = 0  (same numbers cancel out)
// 2. 0 ^ a = a
// By XORing all elements, duplicates become 0,
// and only the single unique number remains.




// Method 1: Using reduce()
// We use Array.reduce() to iterate through the array
// and apply the XOR (^) operation on each element.
// Duplicate numbers cancel each other (a ^ a = 0),
// and the remaining value is the single number.
// Initial value is 0.
function singleNumber(nums){
    return nums.reduce((acc, number) => acc ^ number, 0);
 }
 
 
 // Method 2: Using forEach()
 // We loop through the array using forEach()
 // and continuously apply XOR to a result variable.
 // This method uses a callback function.
 function singleNum(nums){
     let result = 0;
     nums.forEach((number)=>{
         result ^= number;   // XOR operation
     });
     return result;
 }
 
 
 // Method 3: Using for...of loop (Recommended)
 // We iterate directly over array values using for...of.
 // This is clean, readable, and efficient.
 // Each number is XORed with result.
 // Duplicate values cancel out, leaving the single number.
 function singleN(nums){
     let result = 0;
     for (const num of nums){
         result ^= num;
     }
     return result;
 }
 
 nums = [4,2,1,2,1];
 numbers = [4,3,4,2,1,2,1];
 
 console.log(singleNumber(nums));
 console.log(singleNum(numbers));
 console.log(singleN(nums));
 