# Problem:   Conditional statement - 5 (eolymp 8613)
# Link:      https://eolymp.com/problems/8613
# Language:  Python 3.14
# Submitted: 2018-10-23 14:26 UTC
# Verdict:   Accepted

n=int(input())
if n >= 13:
    print(3*n*n*n+4*n*n+5*n+6);
else:
    print(3*n*n*n-2*n*n-3*n-4);
