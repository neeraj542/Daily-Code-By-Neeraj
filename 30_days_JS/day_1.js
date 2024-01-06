// Challenge 1:
// Write a JavaScript function that reverses a number.
// Sample Data and output:
// Example: 
// x = 32243;
// Expected Output: 34223

function reverseNumber(num) {
    return parseFloat(num.toString().split('').reverse().join('')) * Math.sign(num);
}

const originalNumber = 32243;
const reversedNumber = reverseNumber(originalNumber);

console.log(`Original Number: ${originalNumber}`);
console.log(`Reversed Number: ${reversedNumber}`);
