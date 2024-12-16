const n = 4;

for (let i = 0; i < n; i++) {
  let row = "";

  for (let j = 0; j < i; j++) {
    row += "  ";
  }

  for (let j = 0; j < n - i; j++) {
    // row += j + 1 + " "; // for numbers
    row += String.fromCodePoint(65 + j) + " "; // for alphabet
  }

  console.log(row);
}
