// Problem:   EOlymp 11377
// Link:      https://eolymp.com/problems/11377
// Language:  Go 1.20
// Submitted: 2025-03-22 13:57 UTC
// Verdict:   Accepted

package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	if a >= 3*b {
		fmt.Println("Cheated")
	} else {
		fmt.Println("Done by himself")
	}
}
