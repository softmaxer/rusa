package main

/*
#cgo CFLAGS: -I${SRCDIR}/core
#cgo LDFLAGS: -Wl,-rpath,${SRCDIR}/core
#cgo LDFLAGS: -L${SRCDIR}/core
#cgo LDFLAGS: -lrusa
#include <rusa.h>
*/
import "C"

import (
	"fmt"
)

func main() {
	C.test_hello()
	ramUsage := C.ulong(0)
	C.available_ram(&ramUsage)
	fmt.Println("ram usage: ", ramUsage)
}
