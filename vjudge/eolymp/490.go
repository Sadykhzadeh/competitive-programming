// Problem:   EOlymp 490
// Link:      https://eolymp.com/problems/490
// Language:  Go 1.20
// Submitted: 2025-03-22 15:07 UTC
// Verdict:   Accepted

package main

import (
	"bufio"  // оно вроде работает... должно работать, надо проверить!
	"fmt"
	"os"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	input, _ := reader.ReadString('\n')
	input = strings.TrimSpace(input)
	prev := '0'
	var encoded strings.Builder
	for _, bit := range input {
		if bit != prev {
			encoded.WriteByte('1')
		} else {
			encoded.WriteByte('0')
		}
		prev = bit
	}
	fmt.Println(encoded.String())
}
