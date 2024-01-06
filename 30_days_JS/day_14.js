function repeat(str, n = 1) {
    let result = '';

    for (let i = 0; i < n; i++) {
        result += str;
    }

    return result;
}

// Test cases
console.log(repeat('Ha!'));
console.log(repeat('Ha!', 2));
console.log(repeat('Ha!', 3));
