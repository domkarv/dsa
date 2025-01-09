/**
 * Single Number II
 * (LeetCode #137)
 */

/* 1 */
// function singleNumber(nums: number[]): number {
//   let hash: Record<number, number> = {};
//   let single = NaN;
//   nums.forEach((num) => {
//     hash[num] = (hash[num] || 0) + 1;
//   });
//   Object.entries(hash).forEach(([key, value]) => {
//     if (value === 1) single = Number(key);
//   });
//   return single;
// }

/* 2 */
// function singleNumber(nums: number[]): number {
//   const bitCount = new Array(32).fill(0);
//   for (const num of nums) {
//     for (let i = 0; i < 32; i++) {
//       if ((num & (1 << i)) !== 0) {
//         bitCount[i]++;
//       }
//     }
//   }
//   let result = 0;
//   for (let i = 0; i < 32; i++) {
//     if (bitCount[i] % 3 !== 0) {
//       result |= 1 << i;
//     }
//   }
//   return result;
// }

/* 3 */ // don't know how the fuck is this working, there's no concept just calculation in this
// function singleNumber(nums: number[]): number {
//   let ones = 0;
//   let twos = 0;
//   for (let num of nums) {
//     ones = (num ^ ones) & ~twos;
//     twos = (num ^ twos) & ~ones;
//   }
//   return ones;
// }

/* 4 */
function singleNumber(nums: number[]): number {
  nums.sort((a, b) => a - b);

  // every element appears three times except for one
  // that's why `i=i+3`
  for (let i = 1; i < nums.length; i = i + 3) {
    if (nums[i] !== nums[i - 1]) return nums[i - 1];
  }

  return nums[nums.length - 1];
}

const nums = [0, 1, 1, 0, 1, 0, 2];

console.log(singleNumber(nums));
