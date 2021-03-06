#include <stdlib.h>
#include <string.h>

#include "rpg.h"

#ifndef RPG_STRING_LIST
#define RPG_STRING_LIST 1

#define RPG_STRING_LIST_INIT(l) ret = rpg_string_list_init(p,&l);ENSURE_SUCCEEDED
#define RPG_STRING_LIST_ADD(l,v) ret = rpg_string_list_add(p,l,v);ENSURE_SUCCEEDED
#define RPG_STRING_LIST_REMOVE_LAST(l) ret = rpg_string_list_remove_last(p,l);ENSURE_SUCCEEDED
#define RPG_STRING_LIST_GET(l,i,s) ret = rpg_string_list_get(l,i,&s);ENSURE_SUCCEEDED
#define RPG_STRING_LIST_TO_STRING(l,s) ret = rpg_string_list_to_string(p,l,&s);ENSURE_SUCCEEDED


struct _rpg_string_list_item {
	char *data;
	struct _rpg_string_list_item *next;
};
struct _rpg_string_list {
	int count;
	struct _rpg_string_list_item *first;
	struct _rpg_string_list_item *last;
};


int rpg_string_list_init( apr_pool_t *p, struct _rpg_string_list **out_new );

int rpg_new_string_list_item( apr_pool_t *p, char *string, struct _rpg_string_list_item **out_new );

int rpg_string_list_add( apr_pool_t *p, struct _rpg_string_list *string_list, char *string );

int rpg_string_list_remove_last( apr_pool_t *p, struct _rpg_string_list *string_list );

int rpg_string_list_get( struct _rpg_string_list *string_list, int index, char **out_string );

int rpg_string_list_to_string( apr_pool_t *p, struct _rpg_string_list *string_list, char **out_string );

#endif
