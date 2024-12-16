const n = 5;

for (let i = 0; i < n; i++) {
  let row = "";
  for (let j = i; j >= 0; j--) {
    row += String.fromCodePoint(65 + j) + " ";
  }
  console.log(row);
}
