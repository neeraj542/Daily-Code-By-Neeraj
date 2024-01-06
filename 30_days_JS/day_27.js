function* range(start, end) {
    for (let i = start; i <= end; i++) {
        yield i;
    }
}

// Example usage:
const start = 1;
const end = 5;
const numbersInRange = [...range(start, end)];

console.log(numbersInRange); // Output: [1, 2, 3, 4, 5]
