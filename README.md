# Competitive Programming

My accepted solutions from online judges, collected in one place. Every commit is one accepted submission and carries the date it was judged, so the history and the contribution graph follow the real timeline.

**905 problems** solved, **1252 accepted submissions**, December 2017 to March 2025.

## Judges

| Judge | Problems | Submissions | Active | Index |
|---|---:|---:|---|---|
| [Codeforces](https://codeforces.com/profile/Sadykhzadeh) | 309 | 319 | 2018–2020 | [codeforces/](codeforces/README.md) |
| [eolymp](https://eolymp.com/users/Sadykhzadeh) | 541 | 837 | 2017–2024 | [eolymp/](eolymp/README.md) |
| [CSES Problem Set](https://cses.fi/problemset/) | 11 | 11 | 2019–2020 | [cses/](cses/README.md) |
| [LeetCode](https://leetcode.com/u/Sadykhzadeh/) | 2 | 2 | 2022 | [leetcode/](leetcode/README.md) |
| [Virtual Judge](https://vjudge.net/user/AzerSadykhzadeh) | 42 | 83 | 2018–2025 | [vjudge/](vjudge/README.md) |

## Languages

| Language | Problems |
|---|---:|
| C++ | 833 |
| Python | 31 |
| JavaScript | 16 |
| Go | 12 |
| C# | 5 |
| Pascal | 2 |
| Java | 2 |
| TypeScript | 2 |
| Befunge | 1 |
| Haskell | 1 |

## Accepted per year

| Year | Submissions |
|---|---:|
| 2017 | 2 |
| 2018 | 430 |
| 2019 | 705 |
| 2020 | 65 |
| 2021 | 24 |
| 2022 | 2 |
| 2023 | 4 |
| 2024 | 4 |
| 2025 | 16 |

## Layout

```
codeforces/<contest>/<index>.<ext>      e.g. codeforces/1278/A.cpp
codeforces/gym/<contest>/<index>.<ext>
eolymp/<id>-<title>.<ext>               e.g. eolymp/00001-simple-problem.cpp
cses/<id>-<title>.<ext>
leetcode/<id>-<slug>.<ext>
vjudge/<origin judge>/<problem>.<ext>   submissions made through Virtual Judge
```

Each file starts with a short header: problem name, link, language and submission time (plus rating and tags for Codeforces). The code below the header is exactly what was accepted. When a problem was accepted more than once in the same language, the later submission updates the same file, so `git log -p <file>` shows how the solution changed.
