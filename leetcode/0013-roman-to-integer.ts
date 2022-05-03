// Problem:   Roman to Integer (LeetCode 13)
// Link:      https://leetcode.com/problems/roman-to-integer/
// Level:     Easy
// Language:  TypeScript
// Submitted: 2022-05-03 14:30 UTC
// Verdict:   Accepted

function romanToInt(s: string): number {
  let answer: number = 0;
  const qwe: Array<[string, number]> = [
    ["CM", 900], 
    ["CD", 400],
    ["XC", 90],
    ["XL", 40],
    ["IX", 9],
    ["IV", 4],
    ["M", 1000],
    ["D", 500],
    ["C", 100],
    ["L", 50],
    ["X", 10],
    ["V", 5],
    ["I", 1]
  ];
  while(s) {
    for (const i of qwe) {
      if(s.startsWith(i[0])){
        s = s.replace(i[0], "");
        answer += i[1];
        break;
      }
    }
  }
  return answer;
};
