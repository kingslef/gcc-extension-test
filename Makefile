CFLAGS := -std=gnu11
CFLAGS += -pedantic -Wall -Wextra
CFLAGS += -Wformat=2 -Wswitch-default -Wcast-align -Wpointer-arith -Wnested-externs
CFLAGS += -Wbad-function-cast -Wstrict-prototypes -Winline -Wundef -Wcast-qual
CFLAGS += -Wshadow -Wwrite-strings -Wconversion -Wstrict-aliasing=2 -Wunused-result

TARGETS = builtin-args empty-struct forward-decl label-address nested-func

all: ${TARGETS}

.PHONY: clean

clean:
	rm -f ${TARGETS}
