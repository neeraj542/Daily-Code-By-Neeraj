function debounce(func, delay) {
    let timerId;
  
    return function (...args) {
      clearTimeout(timerId);
  
      timerId = setTimeout(() => {
        func.apply(this, args);
      }, delay);
    };
  }
  
  function myFunction() {
    console.log('Function executed!');
  }
  
  const debouncedFunction = debounce(myFunction, 1000);
  
  debouncedFunction();
  debouncedFunction();
  debouncedFunction();
  // ...
  
  // After waiting for 1000 milliseconds from the last call, myFunction will be executed.
  