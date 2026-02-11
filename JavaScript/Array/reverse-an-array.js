/*
// Two-Pointer Approach to reverse an array in place:
// 1. start = 0, end = array.length - 1
// 2. Swap array[start] and array[end]
// 3. Increment start, decrement end
// 4. Repeat until start >= end
*/

const numbers = [1,2,3,4,5,6];

function reverseArray(numbers){
    start = 0;
    end = numbers.length - 1;
  while(start < end){
    [numbers[start],numbers[end]] = [numbers[end],numbers[start]];
    start += 1;
    end -= 1;
  }
}

// console.log( `After Reverse: ${numbers.join(" ")}`);
reverseArray(numbers)
//  console.log( `Before Reverse: ${numbers.join(" ")}`);

//We use join
function printArray(numbers){
    console.log(numbers.join(" "));
}

printArray(numbers); // Output: 1 2 3 4 5


//In Js we could also use bilt-in method array.reverse()
console.log(numbers.reverse()); // reverses array in place
