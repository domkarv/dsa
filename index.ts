const n = 6;

for (let i = 0; i < n; i++) {
  let row = "";
  for (let j = i + 1; j > 0; j--) {
    row += j + " ";
  }
  console.log(row);
}
