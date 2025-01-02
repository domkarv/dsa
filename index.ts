/**
 * Find the XOR of Numbers Which Appear Twice
 * (LeetCode #3158)
 */

/* 1 */
// function duplicateNumbersXOR(nums: number[]): number {
//   let unique = Array.from(new Set(nums));
//   let xor = 0;
//   unique.forEach((el) => {
//     xor ^= el;
//   });
//   nums.forEach((el) => {
//     xor ^= el;
//   });
//   return xor;
// }

/* 2 */
function duplicateNumbersXOR(nums: number[]): number {
  let xor = 0;
  let hash: Record<number, number> = {};
  nums.forEach((num) => {
    hash[num] = (hash[num] || 0) + 1;
    if (hash[num] == 2) xor ^= num;
  });
  return xor;
}

const nums = [1, 2, 3, 2, 3, 4, 4];

console.log(duplicateNumbersXOR(nums));
