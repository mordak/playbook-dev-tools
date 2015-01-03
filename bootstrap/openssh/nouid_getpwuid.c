#include <stdlib.h>
#include <sys/types.h>
#include <pwd.h>

static struct passwd fakepwd;
static char* fakepwd_name = "AppUser";
static char* fakepwd_shell = "/bin/sh";
static char* fakepwd_passwd = "*";


struct passwd *nouid_getpwuid(uid_t uid){
  struct passwd *realpwd;
  realpwd = getpwuid(uid);
  if(realpwd == NULL){
    /* this user has no passwd entry.
     * Fake one up. */
    fakepwd.pw_name = fakepwd_name;
    fakepwd.pw_gecos = fakepwd_name;
    fakepwd.pw_shell = fakepwd_shell;
    fakepwd.pw_passwd = fakepwd_passwd;
    fakepwd.pw_dir = getenv("HOME");
    fakepwd.pw_uid = uid;
    fakepwd.pw_gid = (gid_t)uid;
    return &fakepwd;
  }
  return realpwd;
}

