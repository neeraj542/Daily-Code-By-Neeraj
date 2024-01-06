function counter() {
    let count = 0;

    return function () {
        return ++count;
    };
}

// Example usage:
const incrementCounter = counter();

console.log(incrementCounter()); // Output: 1
console.log(incrementCounter()); // Output: 2
console.log(incrementCounter()); // Output: 3
