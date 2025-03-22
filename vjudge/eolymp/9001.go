// Problem:   EOlymp 9001
// Link:      https://eolymp.com/problems/9001
// Language:  Go 1.20
// Submitted: 2025-03-22 14:15 UTC
// Verdict:   Accepted

package main

import (
	"fmt"
)

func main() {
	var a, b int64
	fmt.Scan(&a, &b)
	if a <= 0 && b >= 0 {
		fmt.Println(0)
		return
	}
	if a > 0 {
		fmt.Println(1)
		return
	}
	count := b - a + 1
	if count%2 == 0 {
		fmt.Println(1)
	} else {
		fmt.Println(-1)
	}
}
