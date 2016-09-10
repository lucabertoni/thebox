#include <getopt.h>

#include "thebox_message.h"

#ifndef THEBOX_H
#define THEBOX_H

#define	_THEBOX_OPTIONS_NUMBER	2

typedef struct{
    int gen_id;
    int send_message;
}TheBoxOptions;

static const struct option thebox_options[] = {
    {"gen-id",		no_argument,		0,	0},
    {"send-message",	optional_argument,	0,	0},
    {0,			0,			0,	0}
};

enum THEBOX_OPTIONS_INDEXES{
    GEN_ID = 2,
    SEND_MESSAGE
};

int thebox_set_options_from_args(int argc, char **argv, TheBoxOptions *options, TheBoxMessage *message);

int thebox_set_option_value(enum THEBOX_OPTIONS_INDEXES option, char *option_value, TheBoxOptions *options, TheBoxMessage *message);

void thebox_print_help_usage();

#endif