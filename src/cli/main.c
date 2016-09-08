#include <stdlib.h>

#include "../common/thebox.h"

int main(int argc, char **argv){
    TheBoxOptions *options;
    
    TheBoxMessage *message;
    
    thebox_message_initialize(message);
    
    if(!thebox_set_options_from_args(argc, argv, options, message)){
        thebox_print_help_usage();
        exit(EXIT_FAILURE);
    }
    
}