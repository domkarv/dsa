const n = 5;

let char = 65;

for (let i = 0; i < n; i++) {
  let row = "";
  for (let j = 0; j <= i; j++) {
    row += String.fromCodePoint(char++) + " ";
  }
  console.log(row);
}
