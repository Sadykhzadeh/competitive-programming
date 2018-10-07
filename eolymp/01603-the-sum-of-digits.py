# Problem:   The sum of digits (eolymp 1603)
# Link:      https://eolymp.com/problems/1603
# Language:  Python 3.14
# Submitted: 2018-10-07 19:19 UTC
# Verdict:   Accepted

import math

a = int(input())
a = abs(a)
p = 0
while a != 0:
    temp = a % 10
    p = p + temp
    a = a // 10
print(p)
