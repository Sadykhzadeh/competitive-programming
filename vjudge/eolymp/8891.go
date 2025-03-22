// Problem:   EOlymp 8891
// Link:      https://eolymp.com/problems/8891
// Language:  Go 1.20
// Submitted: 2025-03-22 14:03 UTC
// Verdict:   Accepted

package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)
	cond1 := n%2 == 0
	cond2 := n < 0 && n%3 == 0
	if cond1 != cond2 {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
