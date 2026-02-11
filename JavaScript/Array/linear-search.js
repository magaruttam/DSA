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

For learning and understanding → use for loop (classic linear search)

For production code with simple exact match → use indexOf

For complex conditions → use findIndex

*/


 const numbers = [3,6,7,12,31,23,15,5];
const target = 23;


// Using for loop
function linearSearch(numbers,target){
   for(let i = 0; i<numbers.length; i++){
     if (numbers[i] === target){
        return i
     }
   }
   return -1
}

const Index = linearSearch(numbers,target);
console.log(`${Index}`)

//Using findIndex
//Returns the index of the first element that satisfies the condition.
const result = numbers.findIndex((num)=> num === target)
console.log(result)


//Using indexof
//Returns the index if found, or -1 if not found.
const index = numbers.indexOf(target)
console.log(index)