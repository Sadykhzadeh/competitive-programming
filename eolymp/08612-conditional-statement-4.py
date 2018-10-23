# Problem:   Conditional statement - 4 (eolymp 8612)
# Link:      https://eolymp.com/problems/8612
# Language:  Python 3.14
# Submitted: 2018-10-23 14:28 UTC
# Verdict:   Accepted

x=int(input());
if x >=0:
    print(x*x*x+2*x*x+4*x-6);
else:
    print(x*x*x-7*x);
