function allPositive(arr) {
    const areAllPositive = arr.every(function (number) {
        return number > 0;
    });
    return areAllPositive;
}

// Example usage:
const inputArray1 = [1, 2, 3, 4, 5];
const inputArray2 = [-1, 2, 3, 4, 5];

console.log(allPositive(inputArray1)); // Output: true
console.log(allPositive(inputArray2)); // Output: false
