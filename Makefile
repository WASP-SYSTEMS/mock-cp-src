all:	mock
cflags = ${CFLAGS} -fsanitize=address -fsanitize=undefined
CC ?= gcc
mock:
	${CC} $(cflags) -w -o mock_vp mock_vp.c
clean:
	rm mock_vp
