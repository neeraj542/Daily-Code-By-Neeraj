function firstNonRepeatedCharacter(str) {
    const charCount = {};
  
    for (let char of str) {
      charCount[char] = (charCount[char] || 0) + 1;
    }
  
    for (let char of str) {
      if (charCount[char] === 1) {
        return char;
      }
    }
  
    return null;
  }
  
  const sampleString = 'abacddbec';
  const result = firstNonRepeatedCharacter(sampleString);
  console.log(result);
  