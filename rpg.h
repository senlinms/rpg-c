#ifndef RPG
#define RPG 1

#include <apr-1.0/apr_pools.h>

#define FAILED 0
#define SUCCESS -1
#define FAIL_IF_NULL(v) if ( v == NULL ) { return FAILED; }
#define ENSURE_SUCCEEDED if ( ret == FAILED ) { return FAILED; }

#define NEW_STRING(l) (char *) apr_palloc (p,l)
#define NEW_STRING_BUFFER(l) (char *) apr_palloc (p,l);FAIL_IF_NULL(buffer);

#define DUP_STRING(s) new_string = ( char * ) apr_palloc ( p, strlen( s ) );FAIL_IF_NULL(new_string);strncpy(new_string, s, strlen( s ));
#define DUP_INT(i) new_int = ( int * ) malloc ( sizeof(int) );FAIL_IF_NULL(new_int);*new_int=i;

#define DEFAULT_BUFFER_SIZE 1024

#define ASSERT_INT(i,l) if ( i != 11 ) { return FAILED; }

#endif
