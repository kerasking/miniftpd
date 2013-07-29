#ifndef _COMMON_H_
#define _COMMON_H_

#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <net/if.h>

#include <shadow.h>
#include <signal.h>
#include <linux/capability.h>
#include <pwd.h>
#include <ctype.h>
#include <crypt.h>
#include <dirent.h>
#include <time.h>

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#include <sys/select.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <sys/sendfile.h>
#include <sys/ioctl.h>
#include <sys/wait.h>

#define ERR_EXIT(m) \
  do \
  { \
    perror(m); \
    exit(EXIT_FAILURE); \
  } \
  while (0)

#define MAX_COMMAND_LINE 1024
#define MAX_COMMAND 1024
#define MAX_ARG 1024
#define MINIFTP_CONF "miniftpd.conf"

#endif // _COMMON_H_
