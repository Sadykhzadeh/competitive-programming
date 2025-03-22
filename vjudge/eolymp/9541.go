// Problem:   EOlymp 9541
// Link:      https://eolymp.com/problems/9541
// Language:  Go 1.20
// Submitted: 2025-03-22 14:27 UTC
// Verdict:   Accepted

package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	line, _ := reader.ReadString('\n')
	line = strings.TrimSpace(line)
	n, err := strconv.Atoi(line)
	if err != nil {
		fmt.Println("0")
		return
	}
	if n%2 == 0 {
		n2 := int64(n * n)
		result := (n2 * (n2 + 1)) / 4
		fmt.Println(result)
		return
	}
	sum := 0
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			if (i+j)%2 == 0 {
				sum += i*n + j + 1
			}
		}
	}
	fmt.Println(sum)
}
