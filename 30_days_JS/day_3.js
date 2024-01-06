// Challenge 3:
// Write a JavaScript program to check whether two given integer values are in the range 50..99 (inclusive). Return true if either of them falls within the range.

function isInRange50to99(num1, num2) {
    if ((num1 >= 50 && num1 <= 99) || (num2 >= 50 && num2 <= 99)) {
        return true;
    } else {
        return false;
    }
}

// Example:
const num1 = 45;
const num2 = 75;
const result = isInRange50to99(num1, num2);
console.log(result); 
