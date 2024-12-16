const n = 4;

for (let i = 0; i < n; i++) {
  let row = "";

  for (let j = 1; j < n - i; j++) {
    row += "  ";
  }

  for (let j = 0; j <= i; j++) {
    row += j + 1 + " ";
  }

  for (let j = i; j > 0; j--) {
    row += j + " ";
  }

  console.log(row);
}
