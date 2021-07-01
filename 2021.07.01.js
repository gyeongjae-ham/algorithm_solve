// You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

// Letters are case sensitive, so "a" is considered a different type of stone from "A".

// Example 1:

// Input: jewels = "aA", stones = "aAAbbbb"
// Output: 3
// Example 2:

// Input: jewels = "z", stones = "ZZ"
// Output: 0

// Constraints:

// 1 <= jewels.length, stones.length <= 50
// jewels and stones consist of only English letters.
// All the characters of jewels are unique.

// 풀이법 1(내 풀이)
let numJewelsInStones = function (jewels, stones) {
  let count = 0;
  for (const i of jewels) {
    for (const j of stones) {
      if (i === j) {
        count += 1;
      }
    }
  }
  return count;
};

// 풀이법 2(다른 사람 풀이)
var numJewelsInStones = function (jewels, stones) {
  const jewelsArr = jewels.split("");
  const stonesArr = stones.split("");
  let answer = 0;
  jewelsArr.forEach((jewel) => {
    const found = stonesArr.filter((stone) => stone === jewel);
    answer += found.length;
  });
  return answer;
};
