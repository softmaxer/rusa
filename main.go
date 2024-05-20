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
	var ram uint64
	ramLong := C.ulong(ram)
	C.available_ram(&ramLong)
	fmt.Printf("Free ram available: %dMB\n", ramLong)
}
