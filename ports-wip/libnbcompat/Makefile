LIBFETCH_OBJS = src/common.o src/fetch.o src/file.o
LIBFETCH_OBJS += src/ftp.o src/http.o
COMPAT_OBJS = compat/asprintf.o

OBJS = $(LIBFETCH_OBJS) $(COMPAT_OBJS)

#LIBFETCH_CPPFLAGS = -DFTP_COMBINE_CWDS -DINET6 -DWITH_SSL
LIBFETCH_CPPFLAGS = -DFTP_COMBINE_CWDS
ifdef HAVE_VISIBILITY
LIBFETCH_CFLAGS= -fvisibility=hidden
endif

LIBFETCH_INCS = src/common.h
LIBFETCH_GEN = src/ftperr.h src/httperr.h

.PHONY: all

all: libfetch.so

libfetch.so: libfetch.a
	$(CC) $(LDFLAGS) $(CPPFLAGS) $(LIBS) -shared $(OBJS) -o $@ -Wl,--whole-archive -Wl,--no-whole-archive

libfetch.a: $(OBJS)
	ar rcs $@ $^

src/ftperr.h: src/ftp.errors
	@./src/errlist.sh ftp_errlist FTP $< > $@

src/httperr.h: src/http.errors
	@./src/errlist.sh http_errlist HTTP $< > $@

$(OBJS): %.o: %.c $(LIBFETCH_INCS) $(LIBFETCH_GEN)
	${SILENT}$(CC) -fPIC $(CPPFLAGS) $(LIBFETCH_CPPFLAGS) $(CFLAGS) \
		$(LIBFETCH_CFLAGS) -c $< -o $@

.PHONY: install
install: all
	install -d $(DESTDIR)$(PREFIX)/lib/
	install -m 644 libfetch.a $(DESTDIR)$(PREFIX)/lib/
	install -m 644 libfetch.so $(DESTDIR)$(PREFIX)/lib/
	install -d $(DESTDIR)$(PREFIX)/include/
	install -m 644 src/fetch.h $(DESTDIR)$(PREFIX)/include/

.PHONY: clean
clean:
	-rm -f libfetch.a
	-rm -f libfetch.so
	-rm -f $(OBJS)
	-rm -f $(LIBFETCH_GEN)
