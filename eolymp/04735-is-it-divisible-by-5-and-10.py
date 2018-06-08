# Problem:   Is it divisible by 5 and 10? (eolymp 4735)
# Link:      https://eolymp.com/problems/4735
# Language:  Python 3.14
# Submitted: 2018-06-08 06:53 UTC
# Verdict:   Accepted

a = int(input())
if a % 5 == 0:
  print("Yes");
else:
  print("No");
if a % 10 == 0:
  print("Yes");
else:
  print("No");
