#include <string.h>
#include "thebox_message.h"

void thebox_message_initialize(TheBoxMessage *message){
    // TODO
}

void thebox_set_message_recipient(TheBoxMessage *message, char *option_value){
    strcpy(message->recipient_id,option_value);
}