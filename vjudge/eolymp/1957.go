// Problem:   EOlymp 1957
// Link:      https://eolymp.com/problems/1957
// Language:  Go 1.20
// Submitted: 2025-03-22 14:30 UTC
// Verdict:   Accepted

package main

import (
    "fmt"
    "sort"
)

func main() {
    var n int
    fmt.Scan(&n)
    results := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&results[i])
    }
    distinctScores := make(map[int]bool)
    for _, score := range results {
        distinctScores[score] = true
    }
    scoresSlice := make([]int, 0, len(distinctScores))
    for score := range distinctScores {
        scoresSlice = append(scoresSlice, score)
    }
    sort.Sort(sort.Reverse(sort.IntSlice(scoresSlice)))
    silverScore := scoresSlice[1]
    fmt.Println(silverScore)
}
