function computeSumOrTriple(a, b) {
    if (a === b) {
        return 3 * (a + b);
    } else {
        return a + b;
    }
}

// Example usage:
let num1 = 5;
let num2 = 5;

let result = computeSumOrTriple(num1, num2);
console.log("Result:", result);
