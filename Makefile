CC ?= clang
CFLAGS ?= -w
LDFLAGS ?=
LIBS ?=

.PHONY: mock
mock:
	$(CC) $(CFLAGS) -o mock_vp mock_vp.c $(LDFLAGS) $(LIBS)

.PHONY: clean
clean:
	@$(RM) mock_vp
