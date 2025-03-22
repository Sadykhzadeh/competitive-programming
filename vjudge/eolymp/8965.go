// Problem:   EOlymp 8965
// Link:      https://eolymp.com/problems/8965
// Language:  Go 1.20
// Submitted: 2025-03-22 14:37 UTC
// Verdict:   Accepted

package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)
	arr := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&arr[i])
	}
	minVal := arr[0]
	for _, v := range arr {
		if v < minVal {
			minVal = v
		}
	}
	m := minVal / 2
	for i, v := range arr {
		arr[i] = v - m
	}
	for _, v := range arr {
		fmt.Printf("%d ", v)
	}
	fmt.Println()
}
