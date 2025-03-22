// Problem:   EOlymp 8532
// Link:      https://eolymp.com/problems/8532
// Language:  Go 1.20
// Submitted: 2025-03-22 14:00 UTC
// Verdict:   Accepted

package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	for i := a; i <= b; i++ {
		fmt.Printf("%d ", i*i)
	}
	fmt.Println()
	for i := b; i >= a; i-- {
		fmt.Printf("%d ", i*i*i)
	}
	fmt.Println()
}
