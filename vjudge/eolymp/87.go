// Problem:   EOlymp 87
// Link:      https://eolymp.com/problems/87
// Language:  Go 1.20
// Submitted: 2025-03-22 14:54 UTC
// Verdict:   Accepted

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	program, _ := reader.ReadString('\n')
	program = trimNewline(program)
	position := 0
	direction := 0
	visited := make(map[int]bool)
	visited[position] = true

	for _, cmd := range program {
		switch cmd {
		case 'L':
			position--
			direction = -1
		case 'R':
			position++
			direction = 1
		case 'S':
			position += direction
		}
		visited[position] = true
	}
	fmt.Println(len(visited))
}

func trimNewline(s string) string {
	n := len(s)
	for n > 0 && (s[n-1] == '\n' || s[n-1] == '\r') {
		n--
	}
	return s[:n]
}
