# Problem:   Square string (eolymp 8697)
# Link:      https://eolymp.com/problems/8697
# Language:  Python 3.14
# Submitted: 2021-05-03 05:11 UTC
# Verdict:   Accepted

"""
Quiz 2- листы, сортировка, поиск
3 мая 2021 г., 09:00:00 — 3 мая 2021 г., 12:00:00
Задача-2
Автор: Азер Садыхзаде (https://github.com/Sadykhzadeh)
"""

str = input()

if len(str) % 2:
    print("no")
else:
    temp = len(str) // 2
    for i in range(temp):
        if str[i] != str[i + temp]:
            print("no")
            exit()
    print("yes")
