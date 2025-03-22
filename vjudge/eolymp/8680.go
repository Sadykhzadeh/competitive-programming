// Problem:   EOlymp 8680
// Link:      https://eolymp.com/problems/8680
// Language:  Go 1.20
// Submitted: 2025-03-22 14:46 UTC
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
	count := 0
	for i := 1; i < n-1; i++ {
		if sequence[i-1]%2 == 0 && sequence[i+1]%2 == 0 {
			count++
		}
	}
	fmt.Println(count)
}
