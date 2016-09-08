#include "thebox.h"

int thebox_set_option_value(int option, char *option_value, TheBoxOptions *options, TheBoxMessage *message){
    int ret;
    
    ret = 1;
    
    switch(option){
        case GEN_ID:
            options->gen_id = 1;
            break;
        case SEND_MESSAGE:
            options->send_message = 1;
            thebox_set_message_recipient(message, option_value);
        default:
            ret = 0;
            break;
    }            
}

int thebox_set_options_from_args(int argc, char **argv, TheBoxOptions *options, TheBoxMessage *message){
    int i, ret;
    
    const struct option *app_options = thebox_options;
    
    for(i = 0; i < _THEBOX_OPTIONS_NUMBER; i++, app_options++){
        if(getopt_long(argc,argv,app_options->name,thebox_options,&optind) == 0){
            if (!thebox_set_option_value(optind, optarg, options, message)){
                i = _THEBOX_OPTIONS_NUMBER + 1;
            }
        }else{
            i = _THEBOX_OPTIONS_NUMBER + 1;
        }
    }
    
    return (i <= _THEBOX_OPTIONS_NUMBER ? 1 : 0);
}