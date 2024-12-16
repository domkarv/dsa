const n = 5;

for (let i = 0; i < n; i++) {
  let row = "";
  for (let j = 0; j < n - i; j++) {
    row += String.fromCodePoint(65 + i) + " ";
  }
  console.log(row);
}
