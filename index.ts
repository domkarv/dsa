const n = 4;

for (let i = 0; i < n; i++) {
  let row = "";

  for (let j = 0; j < i + 1; j++) {
    row += "* ";
  }

  for (let j = 0; j < 2 * (n - (i + 1)) - 1; j++) {
    row += "  ";
  }

  for (let j = 0; j < i + 1; j++) {
    if (j !== n - 1) row += "* ";
  }

  console.log(row);
}

for (let i = 0; i < n - 1; i++) {
  let row = "";

  for (let j = 0; j < n - i - 1; j++) {
    row += "* ";
  }

  for (let j = 0; j < 2 * (i + 1) - 1; j++) {
    row += "  ";
  }

  for (let j = 0; j < n - i - 1; j++) {
    row += "* ";
  }

  console.log(row);
}
