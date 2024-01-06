function doubleValues(arr) {
    const doubledArray = arr.map(function (number) {
        return number * 2;
    });
    return doubledArray;
}

// Example usage:
const inputArray = [1, 2, 3, 4, 5];
const resultArray = doubleValues(inputArray);

console.log(resultArray); // Output: [2, 4, 6, 8, 10]
