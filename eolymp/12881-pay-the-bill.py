# Problem:   Pay the Bill (eolymp 12881)
# Link:      https://eolymp.com/problems/12881
# Language:  Python 3.13
# Submitted: 2023-03-01 12:25 UTC
# Verdict:   Accepted

n = int(input())
x = n + n // 10
print(x if n % 10 == 0 else x + 1)
