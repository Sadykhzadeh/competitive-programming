// Problem:   EOlymp 9541
// Link:      https://eolymp.com/problems/9541
// Language:  Go 1.20
// Submitted: 2025-03-22 14:21 UTC
// Verdict:   Accepted

package main

import (
    "bufio"
    "fmt"
    "math/big"
    "os"
    "strings"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    line, _ := reader.ReadString('\n')
    line = strings.TrimSpace(line)
    n := new(big.Int)
    n, ok := n.SetString(line, 10)
    if !ok {
        fmt.Println("0")
        return
    }
    n2 := new(big.Int).Mul(n, n)
    n2plus1 := new(big.Int).Add(n2, big.NewInt(1))
    product := new(big.Int).Mul(n2, n2plus1)
    result := new(big.Int).Div(product, big.NewInt(4))
    fmt.Println(result.String())
}
