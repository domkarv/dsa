/**
 * Kadane's Algorithm - Maximum Subarray Sum
 */

let arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4];

let maxSum = Number.MIN_SAFE_INTEGER;
let currSum = 0;

for (let i = 0; i < arr.length; i++) {
  currSum += arr[i] as number;
  maxSum = Math.max(maxSum, currSum);

  currSum = currSum < 0 ? 0 : currSum;
}

console.log(maxSum);
