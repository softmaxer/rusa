package main

/*
#cgo CFLAGS: -I${SRCDIR}/core
#cgo LDFLAGS: -Wl,-rpath,${SRCDIR}/core
#cgo LDFLAGS: -L${SRCDIR}/core
#include "rusa.h"
*/
import "C"

func main() {
	C.test_hello()
}
