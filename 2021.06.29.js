// # letters and removing them.

// # We repeatedly make duplicate removals on s until we no longer can.

// # Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

// # Example 1:

// # Input: s = "abbaca"
// # Output: "ca"
// # Explanation:
// # For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
// # Example 2:

// # Input: s = "azxxzy"
// # Output: "ay"

// # Constraints:

// # 1 <= s.length <= 105
// # s consists of lowercase English letters.

// 풀이법 2(내 풀이 js 버전)
var removeDuplicates = function (s) {
  let dl = [];
  for (let i = 0; i < s.length; i++) {
    if (dl.length === 0) {
      dl.push(s[i]);
      continue;
    }
    if (dl[dl.length - 1] !== s[i]) {
      dl.push(s[i]);
    } else {
      dl.pop();
    }
  }
  return dl.join("");
};
