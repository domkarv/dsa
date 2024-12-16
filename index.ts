const n = 4;

for (let i = 0; i < n; i++) {
  let row = "";
  let char = 65;
  for (let j = 0; j < n; j++) {
    // row += j + " "; // for numbers
    // row += "* "; // for star
    row += String.fromCharCode(char++) + " "; // for alphabates
  }
  console.log(row);
}
