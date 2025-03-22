// Problem:   EOlymp 7440
// Link:      https://eolymp.com/problems/7440
// Language:  Go 1.20
// Submitted: 2025-03-22 14:12 UTC
// Verdict:   Accepted

package main

import (
	"bufio"
	"fmt"
	"os"
)

func isPalindrome(s string, left, right int) bool {
	for left < right {
		if s[left] != s[right] {
			return false
		}
		left++
		right--
	}
	return true
}

func makePalindrome(s string) (bool, string) {
	left, right := 0, len(s)-1
	for left < right {
		if s[left] != s[right] {
			if isPalindrome(s, left+1, right) {
				return true, s[:left] + s[left+1:]
			}
			if isPalindrome(s, left, right-1) {
				return true, s[:right] + s[right+1:]
			}
			return false, ""
		}
		left++
		right--
	}
	if len(s)%2 == 1 {
		mid := len(s) / 2
		return true, s[:mid] + s[mid+1:]
	} else {
		mid := len(s)/2 - 1
		return true, s[:mid] + s[mid+1:]
	}
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	s, _ := reader.ReadString('\n')
	if len(s) > 0 && s[len(s)-1] == '\n' {
		s = s[:len(s)-1]
	}
	ok, result := makePalindrome(s)
	if ok {
		fmt.Println("yes")
		fmt.Println(result)
	} else {
		fmt.Println("no")
	}
}
