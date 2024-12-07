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
	var avail C.ulong = C.available_ram().free
	fmt.Printf("Free ram available: %dMB\n", avail)
}
