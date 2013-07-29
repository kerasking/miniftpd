#ifndef _SESSION_H_
#define _SESSION_H_

#include "common.h"

typedef struct session
{
    /* control conn */
    uid_t uid;
    int ctrl_fd;
    char cmdline[MAX_COMMAND_LINE];
    char cmd[MAX_COMMAND];
    char arg[MAX_ARG];

    /* data connect */
    struct sockaddr_in* port_addr;
    int pasv_listen_fd;
    int data_fd;
    int data_process;

    /* limit speed */
    unsigned int bw_upload_rate_max;
    unsigned int bw_download_rate_max;
    long bw_transfer_start_sec;
    long bw_transfer_start_usec;

    /* parent child process communicate passageway */
    int parent_fd;
    int child_fd;

    /* ftp proto state */
    int is_ascii;
    long long restart_pos;
    char* rnfr_name; /* rename */
    int abor_received;

    /* connect nums limit */
    unsigned int num_clients;
    unsigned int num_this_ip;

}session_t;

void begin_session(session_t *sess);



#endif // _SESSION_H_
