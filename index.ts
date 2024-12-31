/**
 * Find the maximum element in an array.
 */

const arr = [4, 23, 45, 67, 5, 23, 97];

let largest = Number.MIN_SAFE_INTEGER;

/* 1 */
arr.forEach((num) => {
  if (num > largest) {
    largest = num;
  }
});
console.log(largest);

/* 2 */
arr.find((num) => {
  if (num > largest) {
    largest = num;
  }
});
console.log(largest);

/* 3 */
for (const num of arr) {
  if (num > largest) {
    largest = num;
  }
}
console.log(largest);

/* 4 */
largest = arr.reduce(
  // (prev, curr) => (curr > prev ? curr : prev),
  (prev, curr) => {
    if (curr > prev) prev = curr;

    return prev;
  },
  Number.MIN_SAFE_INTEGER
);
console.log(largest);

/* 5 */
largest = Math.max(...arr);
console.log(largest);
