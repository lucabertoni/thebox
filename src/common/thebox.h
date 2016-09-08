#include <getopt.h>

typedef struct{
    int gen_id;
    int send_message;
}TheBoxSettings;

typedef struct{
    char *my_key;
    char *recipient_id;
    char *message_content;
} TheBoxMessage;

const struct option thebox_options[] = {
    {"gen-id",		no_argument,		0,	0},
    {"send-message",	optional_argument,	0,	0},
    {0,			0,			0,	0}
};

int thebox_generate_id(char* id);