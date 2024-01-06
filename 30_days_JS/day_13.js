function memoize(func) {
    const cache = {};
    return function (...args) {
        const key = JSON.stringify(args);
        if (!(key in cache)) {
            cache[key] = func(...args);
        }
        return cache[key];
    };
}

function expensiveFunction(x, y) {
    return x + y;
}

const memoizedExpensiveFunction = memoize(expensiveFunction);

const result1 = memoizedExpensiveFunction(1, 2);
const result2 = memoizedExpensiveFunction(1, 2);

console.log(result1);
console.log(result2);
