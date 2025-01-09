/**
 * (LeetCode #)
 */

let x = 5;
let y = 10;
console.log(x, y);

/* 1 */
x = x ^ y; // 5 ^ 10
y = x ^ y; // 5 ^ 10 ^ 10
x = x ^ y; // 5 ^ 10 ^ 5
console.log(x, y); // 10 5

/* 2 */
let temp = x;
x = y;
y = temp;
console.log(x, y); // 5 10

/* 3 */
x = x + y; // 5 + 10 = 15
y = x - y; // 15 - 10 = 5
x = x - y; // 15 - 5 = 10
console.log(x, y); // 10 5

[x, y] = [y, x];
console.log(x, y); // 5 10
