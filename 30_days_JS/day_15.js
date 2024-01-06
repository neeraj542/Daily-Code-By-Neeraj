function string_chop(str, size = 1) {
    if (size <= 0) {
        return "Invalid chop size";
    }

    const result = [];
    for (let i = 0; i < str.length; i += size) {
        result.push(str.slice(i, i + size));
    }

    return result;
}

console.log(string_chop('Scaler'));
console.log(string_chop('Scaler', 2));
