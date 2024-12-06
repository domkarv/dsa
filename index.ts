let arr = [3, -4, 5, 4, -1, 7, -8];

let maxSum = Number.MIN_SAFE_INTEGER;

for (let i = 0; i < arr.length; i++) {
  let currSum = 0;
  for (let j = i; j < arr.length; j++) {
    currSum += arr[j] as number;
    maxSum = Math.max(maxSum, currSum);
  }
}

console.log(maxSum);
