

#include <sys/types.h>
#ifndef _WIN32
#include <sys/select.h>
#include <sys/socket.h>
#else
#include <winsock2.h>
#endif
#include <string.h>
#include <microhttpd.h>
#include <stdio.h>
#include <stdlib.h>
#include "_main.h"

#define PORT 8082
#define n 57

WashingMachine__onetask_mem mem;
int glob_cnt=0;


struct item
{
    const char *key;
    const char *value;
};


struct item dict[n];

int save_items (void *cls, enum MHD_ValueKind kind, 
                   const char *key, const char *value)
{
  dict[glob_cnt].key = key; 
  dict[glob_cnt].value = value;
  glob_cnt += 1;
  return MHD_YES;
}

static int
answer_to_connection (void *cls, struct MHD_Connection *connection,
                      const char *url, const char *method,
                      const char *version, const char *upload_data,
                      size_t *upload_data_size, void **con_cls)
{
  char *json = malloc( 10000 );
  struct MHD_Response *response;
  int ret;
  MHD_get_connection_values(connection, MHD_GET_ARGUMENT_KIND, &save_items, NULL);
  printf("Counter:%d", glob_cnt);
  
  glob_cnt = 0; int step_c;int step_max;int e;int s;int c;WashingMachine__onetask_out _res;
  int i;
  for(i= 0; i < n; i++){
if (strcmp(dict[i].key, "e") == 0){ e= atoi(dict[i].value);} else if (strcmp(dict[i].key, "s") == 0){ s= atoi(dict[i].value);} else if (strcmp(dict[i].key, "c") == 0){ c= atoi(dict[i].value);} else 
    {
      printf("Not implemented %s", dict[i].key);
    }
  }
  
  for(i= 0; i < n; i++)
  {
    printf("%s, %s",dict[i].key, dict[i].value);
  }  WashingMachine__onetask_step(e,s,c,
  &_res, &mem);

  char aux[1];
  strcat(json, "{");strcat(json, ", 'p':");sprintf(aux, "%d", _res.p);strcat(json, aux);strcat(json, ", 'stateA':");sprintf(aux, "%d", _res.stateA);strcat(json, aux);strcat(json, "}");
  response =
  MHD_create_response_from_buffer (strlen (json), (void *) json, 
             MHD_RESPMEM_PERSISTENT);
  ret = MHD_queue_response (connection, MHD_HTTP_OK, response);
  MHD_destroy_response (response);

  return ret;
}

int main(int argc, char** argv) {
  
  struct MHD_Daemon *daemon;
  WashingMachine__onetask_reset(&mem);
  int i;
  for(i= 0; i < n; i++)
  {
    dict[i].key = "";
    dict[i].value = "";
  }

  daemon = MHD_start_daemon (MHD_USE_SELECT_INTERNALLY, PORT, NULL, NULL,
                             &answer_to_connection, NULL, MHD_OPTION_END);
  if (NULL == daemon)
    return 1;

  (void) getchar ();

  MHD_stop_daemon (daemon);
  return 0;
} 