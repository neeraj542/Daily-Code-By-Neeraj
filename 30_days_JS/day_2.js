// Challenge 2:
// Write a JavaScript function that accepts a string as a parameter and converts the first letter of each word into upper case.

// Example string: 'the quick brown fox'
// Expected Output: 'The Quick Brown Fox '

function capitalizeFirstLetterOfEachWord(inputString) {
    const words = inputString.split(' ');
    const capitalizedWords = words.map(word => word.charAt(0).toUpperCase() + word.slice(1));
    return capitalizedWords.join(' ');
}

// Example:
const inputString = 'the quick brown fox';
const result = capitalizeFirstLetterOfEachWord(inputString);
console.log(result);
