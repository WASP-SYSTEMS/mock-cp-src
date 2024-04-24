all:	mock
CFLAGS = -fsanitize=address -fsanitize=undefined
mock:
	gcc $(CFLAGS) -w -o mock_vp mock_vp.c 

clean:
	rm mock_vp
