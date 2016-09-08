#ifndef THEBOX_MESSAGE_H
#define THEBOX_MESSAGE_H

typedef struct  {
    char *my_key;
    char *recipient_id;
    char *message_content;
}TheBoxMessage;

 
void thebox_set_message_recipient(TheBoxMessage *message, char *option_value);

void thebox_message_initialize(TheBoxMessage *message);

#endif