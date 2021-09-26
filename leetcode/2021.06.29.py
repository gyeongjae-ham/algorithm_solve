# letters and removing them.

# We repeatedly make duplicate removals on s until we no longer can.

# Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

# Example 1:

# Input: s = "abbaca"
# Output: "ca"
# Explanation: 
# For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
# Example 2:

# Input: s = "azxxzy"
# Output: "ay"
 

# Constraints:

# 1 <= s.length <= 105
# s consists of lowercase English letters.

# 풀이법 1(내 풀이)
class Solution:
    def removeDuplicates(self, s: str) -> str:
        dl = []
        for i in s:
            if not dl:
                dl.append(i)
                continue
                
            if dl[-1] != i:
                dl.append(i)
            else:
                dl.pop()
        
        answer = ''
        for i in dl:
            answer += i
        
        return answer