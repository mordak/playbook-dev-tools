#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "langinfo.h"

static char *replace( char *prev, char *value )
{
  if( value == NULL )
    return prev;

  if( prev )
    free( prev );
  return strdup( value );
}

char *nl_langinfo (nl_item __item)
{
  // static char result[128];
  static char *result = NULL;
  static char *nothing = "";

  switch( __item )
  {
    case CODESET:
      {
        char *p;
        result = replace( result, setlocale( LC_CTYPE, NULL ));
        if( (p = strrchr( result, '.' )) == NULL )
	  return nothing;

	if( (++p - result) > 2 )
	  strcpy( result, "cp" );
	else
	  *result = '\0';
	strcat( result, p );
        return result;
      }
  }
  return nothing;
}

#ifdef DEBUGGING
#include <stdio.h>
#include <stdlib.h>

int main()
{
  setlocale( LC_ALL, "" );
  printf( "codeset = %s\n", nl_langinfo( CODESET ));
  return EXIT_SUCCESS;
}
#endif
