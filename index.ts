/**
 * Single Number III
 * (LeetCode #260)
 */

/* 1 */
// function singleNumber(nums: number[]): number[] {
//   let map = new Map<number, number>();
//   nums.forEach((el) => {
//     map.set(el, (map.get(el) || 0) + 1);
//   });
//   let res: number[] = [];
//   map.forEach((val, key) => {
//     if (val === 1) res.push(key);
//   });
//   return res;
// }

/* 2 */
function singleNumber(nums: number[]): number[] {
  let xor = 0;
  for (const num of nums) {
    xor ^= num;
  }
  let divider = xor & -xor;
  let num1 = 0;
  let num2 = 0;
  for (const num of nums) {
    if ((num & divider) === 0) num1 ^= num;
    else num2 ^= num;
  }
  return [num1, num2];
}

const nums = [1, 2, 1, 4, 2, 5];

console.log(singleNumber(nums));
