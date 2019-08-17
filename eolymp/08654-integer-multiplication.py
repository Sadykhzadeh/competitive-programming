# Problem:   Integer multiplication (eolymp 8654)
# Link:      https://eolymp.com/problems/8654
# Language:  Python 3.14
# Submitted: 2019-08-17 11:46 UTC
# Verdict:   Accepted

a, b, c = map(int, input().split())
print((a * b) % c)
