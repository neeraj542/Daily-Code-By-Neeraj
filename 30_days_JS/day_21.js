async function asyncLoop(array, asyncFunction) {
    for (const element of array) {
        await asyncFunction(element);
    }
}

async function asyncOperation(element) {
    return new Promise(resolve => {
        setTimeout(() => {
            console.log(`Processed: ${element}`);
            resolve();
        }, 1000);
    });
}

const myArray = [1, 2, 3, 4, 5];

asyncLoop(myArray, asyncOperation)
    .then(() => {
        console.log("All elements processed.");
    })
    .catch(error => {
        console.error("An error occurred:", error);
    });
