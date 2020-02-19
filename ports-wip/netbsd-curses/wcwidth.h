#include <wchar.h>

struct interval {
  int first;
  int last;
};

static int bisearch(wchar_t ucs, const struct interval *table, int max);

int wcwidth(wchar_t ucs);

int wcswidth(const wchar_t *pwcs, size_t n);

int wcwidth_cjk(wchar_t ucs);

int wcswidth_cjk(const wchar_t *pwcs, size_t n);
