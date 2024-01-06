// ## Challenge 5:
// Write a JavaScript exercise to get the filename extension.

const readlineSync = require('readline-sync');
function getFileExtension() {
  var fileName = readlineSync.question("Enter a file name:");
  if (fileName !== null && fileName !== "") {
    var extension = /[.]/.exec(fileName)
      ? /[^.]+$/.exec(fileName)[0]
      : undefined;
    if (extension) {
      console.log("The file extension is: " + extension);
    } else {
      console.log("The file name does not have an extension.");
    }
  } else {
    console.log("Invalid file name. Please enter a valid file name.");
  }
}

getFileExtension();
