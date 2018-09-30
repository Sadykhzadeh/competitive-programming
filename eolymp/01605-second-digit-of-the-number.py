# Problem:   Second digit of the number (eolymp 1605)
# Link:      https://eolymp.com/problems/1605
# Language:  Python 3.14
# Submitted: 2018-09-30 14:50 UTC
# Verdict:   Accepted

i = input()
a = list(i)
if a[0] == '-':
  print(a[2])
elif a[0] != '-':
  print(a[1])
