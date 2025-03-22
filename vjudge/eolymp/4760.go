// Problem:   EOlymp 4760
// Link:      https://eolymp.com/problems/4760
// Language:  Go 1.20
// Submitted: 2025-03-22 14:06 UTC
// Verdict:   Accepted

package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)
	sequence := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&sequence[i])
	}
	var nonZeros []int
	zeroCount := 0
	for _, num := range sequence {
		if num == 0 {
			zeroCount++
		} else {
			nonZeros = append(nonZeros, num)
		}
	}
	for i := 0; i < zeroCount; i++ {
		nonZeros = append(nonZeros, 0)
	}
	for _, num := range nonZeros {
		fmt.Printf("%d ", num)
	}
	fmt.Println()
}
