#ifndef THEBOX_MESSAGE_H
#define THEBOX_MESSAGE_H

#define	_THEBOX_ID_LEN		12

typedef struct  {
    char *my_key;
    char recipient_id[_THEBOX_ID_LEN];
    char *message_content;
}TheBoxMessage;

 
void thebox_message_set_recipient(TheBoxMessage *message, char *option_value);

void thebox_message_initialize(TheBoxMessage *message);

#endif