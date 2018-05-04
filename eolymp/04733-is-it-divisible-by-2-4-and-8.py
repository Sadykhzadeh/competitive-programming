# Problem:   Is it divisible by 2, 4 and 8? (eolymp 4733)
# Link:      https://eolymp.com/problems/4733
# Language:  Python 3.14
# Submitted: 2018-05-04 19:28 UTC
# Verdict:   Accepted

x = int(input())
if x % 2 == 0:
  print("Yes")
else:
  print("No")
if x % 4 == 0:
  print("Yes")
else:
  print("No")
if x % 8 == 0:
  print("Yes")
else:
  print("No")
print("\n")
