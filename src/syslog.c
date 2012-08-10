#include <stdarg.h>
#include <stdio.h>

#include "syslog.h"

void openlog(const char *ident, int option, int facility)
{
fprintf( stderr, "openlog( '%s', %d, %d )\n", ident, option, facility );
}

void syslog(int priority, const char *format, ...)
{
va_list args;
va_start( args, format );
fprintf( stderr, "syslog( %d ): ", priority );
vfprintf( stderr, format, args );
va_end( args );
}

void closelog(void)
{
fprintf( stderr, "closelog()\n"	);
}

void vsyslog(int priority, const char *format, va_list ap)
{
fprintf( stderr, "syslogv( %d ): ", priority );
vfprintf( stderr, format, ap );
}

int setlogmask(int mask)
{
fprintf( stderr, "setlogmask( %d )\n", mask );
return 0;
}
        