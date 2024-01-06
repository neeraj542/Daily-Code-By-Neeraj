function sumArray(numbers) {
    const sum = numbers.reduce(function (accumulator, currentValue) {
        return accumulator + currentValue;
    }, 0);

    return sum;
}

// Example usage:
const numbersArray = [1, 2, 3, 4, 5];
const result = sumArray(numbersArray);
console.log(result); // Output: 15
