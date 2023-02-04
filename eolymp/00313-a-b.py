# Problem:   A + B (eolymp 313)
# Link:      https://eolymp.com/problems/313
# Language:  Python 3.13
# Submitted: 2023-02-04 15:56 UTC
# Verdict:   Accepted

n = int(input())
for i in range(n):
  x = input().split("+")
  print(int(x[0]) + int(x[1]))
