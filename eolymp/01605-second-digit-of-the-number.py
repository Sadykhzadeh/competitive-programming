# Problem:   Second digit of the number (eolymp 1605)
# Link:      https://eolymp.com/problems/1605
# Language:  Python 3.14
# Submitted: 2018-04-04 21:51 UTC
# Verdict:   Accepted

i = input()
a = list(i)
if a[0] == '-':
  print(a[2])
elif a[0] != '-':
  print(a[1])
