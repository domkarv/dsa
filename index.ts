/**
 * Find the missing number in an array containing numbers from 0 to n
 * (LeetCode #268)
 */

/* 1 */
// function missingNumber(nums: number[]): number {
//   nums.sort((a, b) => a - b);
//   for (let i = 0; i < nums.length; i++) {
//     if (nums[i] !== i) {
//       return i;
//     }
//   }
//   return nums.length;
// }

/* 2 */
// function missingNumber(nums: number[]): number {
//   let currSum = nums.reduce((prev, curr) => prev + curr, 0);
//   let expectedSum = (nums.length * (nums.length + 1)) / 2;
//   return expectedSum - currSum;
// }

/* 3 */
function missingNumber(nums: number[]): number {
  /**
   * Calculate XOR of All Indices:
   *   - We will compute the XOR of all indices from 0 to n.
   *   - This includes every number that should be present in the array.
   *
   * Calculate XOR of Array Elements:
   *   - We also compute the XOR of all elements present in the array.
   *
   * Combine Both Results:
   *   - Finally, we XOR the two results together.
   *     The pairs that exist in both the index range and the array will cancel each other out due to the self-cancellation property of XOR,
   *     leaving only the missing number.
   */

  let xor = 0;
  for (let i = 0; i < nums.length; i++) {
    xor ^= i ^ nums[i];
  }
  xor ^= nums.length;
  return xor;
}

const nums = [9, 6, 4, 2, 3, 5, 7, 0, 1];

console.log(missingNumber(nums));
