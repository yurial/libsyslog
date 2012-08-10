#ifndef SYSLOG_H
#define SYSLOG_H

#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

#define LOG_CONS        0x01
#define LOG_NDELAY      0x02
#define LOG_NOWAIT      0x04
#define LOG_ODELAY      0x08
#define LOG_PERROR      0x10
#define LOG_PID         0x20

#define LOG_AUTH        0x000001
#define LOG_AUTHPRIV    0x000002
#define LOG_CRON        0x000004
#define LOG_DAEMON      0x000008
#define LOG_FTP         0x000010
#define LOG_KERN        0x000020
#define LOG_LPR         0x000040
#define LOG_MAIL        0x000080
#define LOG_NEWS        0x000100
#define LOG_SYSLOG      0x000200
#define LOG_USER        0x000400
#define LOG_UUCP        0x000800
#define LOG_LOCAL0      0x001000
#define LOG_LOCAL1      0x002000
#define LOG_LOCAL2      0x004000
#define LOG_LOCAL3      0x008000
#define LOG_LOCAL4      0x010000
#define LOG_LOCAL5      0x020000
#define LOG_LOCAL6      0x040000
#define LOG_LOCAL7      0x080000

#define LOG_EMERG       0x01
#define LOG_ALERT       0x02
#define LOG_CRIT        0x04
#define LOG_ERR         0x08
#define LOG_WARNING     0x10
#define LOG_NOTICE      0x20
#define LOG_INFO        0x40
#define LOG_DEBUG       0x80

void openlog(const char *ident, int option, int facility);
void syslog(int priority, const char *format, ...);
void closelog(void);
void vsyslog(int priority, const char *format, va_list ap);
int  setlogmask(int mask);

#ifdef __cplusplus
}
#endif


#endif
