

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

Pratica05__task_mem mem;
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
  
  glob_cnt = 0; int step_c;int step_max;int up1;int down1;int up2;int down2;int s;int e;int finish;int start;int cold;int temp_ok;int eco;int confort;int on_lamp;int on_tv;int precense;int push_door;int push_window;Pratica05__task_out _res;
  int i;
  for(i= 0; i < n; i++){
if (strcmp(dict[i].key, "up1") == 0){ up1= atoi(dict[i].value);} else if (strcmp(dict[i].key, "down1") == 0){ down1= atoi(dict[i].value);} else if (strcmp(dict[i].key, "up2") == 0){ up2= atoi(dict[i].value);} else if (strcmp(dict[i].key, "down2") == 0){ down2= atoi(dict[i].value);} else if (strcmp(dict[i].key, "s") == 0){ s= atoi(dict[i].value);} else if (strcmp(dict[i].key, "e") == 0){ e= atoi(dict[i].value);} else if (strcmp(dict[i].key, "finish") == 0){ finish= atoi(dict[i].value);} else if (strcmp(dict[i].key, "start") == 0){ start= atoi(dict[i].value);} else if (strcmp(dict[i].key, "cold") == 0){ cold= atoi(dict[i].value);} else if (strcmp(dict[i].key, "temp_ok") == 0){ temp_ok= atoi(dict[i].value);} else if (strcmp(dict[i].key, "eco") == 0){ eco= atoi(dict[i].value);} else if (strcmp(dict[i].key, "confort") == 0){ confort= atoi(dict[i].value);} else if (strcmp(dict[i].key, "on_lamp") == 0){ on_lamp= atoi(dict[i].value);} else if (strcmp(dict[i].key, "on_tv") == 0){ on_tv= atoi(dict[i].value);} else if (strcmp(dict[i].key, "precense") == 0){ precense= atoi(dict[i].value);} else if (strcmp(dict[i].key, "push_door") == 0){ push_door= atoi(dict[i].value);} else if (strcmp(dict[i].key, "push_window") == 0){ push_window= atoi(dict[i].value);} else 
    {
      printf("Not implemented %s", dict[i].key);
    }
  }
  
  for(i= 0; i < n; i++)
  {
    printf("%s, %s",dict[i].key, dict[i].value);
  }  Pratica05__task_step(up1,down1,up2,down2,s,e,finish,start,cold,temp_ok,eco,confort,on_lamp,on_tv,precense,push_door,push_window,
  &_res, &mem);

  char aux[1];
  strcat(json, "{");strcat(json, ", 'pl':");sprintf(aux, "%d", _res.pl);strcat(json, aux);strcat(json, ", 'p1':");sprintf(aux, "%d", _res.p1);strcat(json, aux);strcat(json, ", ' p2':");sprintf(aux, "%d", _res. p2);strcat(json, aux);strcat(json, ", ' p3':");sprintf(aux, "%d", _res. p3);strcat(json, aux);strcat(json, ", ' ss':");sprintf(aux, "%d", _res. ss);strcat(json, aux);strcat(json, ", 'sp_1':");sprintf(aux, "%d", _res.sp_1);strcat(json, aux);strcat(json, ", 'sp_2':");sprintf(aux, "%d", _res.sp_2);strcat(json, aux);strcat(json, ", ' lamp_on':");sprintf(aux, "%d", _res. lamp_on);strcat(json, aux);strcat(json, ", 'tv_on':");sprintf(aux, "%d", _res.tv_on);strcat(json, aux);strcat(json, ", 'room_oc':");sprintf(aux, "%d", _res.room_oc);strcat(json, aux);strcat(json, ", 'door_open':");sprintf(aux, "%d", _res.door_open);strcat(json, aux);strcat(json, ", 'window_open':");sprintf(aux, "%d", _res.window_open);strcat(json, aux);strcat(json, "}");
  response =
  MHD_create_response_from_buffer (strlen (json), (void *) json, 
             MHD_RESPMEM_PERSISTENT);
  ret = MHD_queue_response (connection, MHD_HTTP_OK, response);
  MHD_destroy_response (response);

  return ret;
}

int main(int argc, char** argv) {
  
  struct MHD_Daemon *daemon;
  Pratica05__task_reset(&mem);
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