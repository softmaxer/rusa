.PHONY: all c go run env

TESTLIBPATH="./core"

all: c go run

env:
	docker build --tag cgo .
	docker run --rm -ti -v $(shell pwd):/src cgo

c:
	gcc -c -Wall -Werror -Wextra -fpic -o ${TESTLIBPATH}/rusa.o ${TESTLIBPATH}/rusa.c
	gcc -shared -o ${TESTLIBPATH}/librusa.so ${TESTLIBPATH}/rusa.o

go:
	go build

run:
	./rusa
