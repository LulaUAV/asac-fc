#ifndef RECEIVER_H
#define RECEIVER_H

#include "stdint.h"


typedef struct {
    uint64_t timestamp;
    uint16_t channels[14];
}__attribute__((packed)) rc_input_t;


int receiver_init();


void receiver_get_last_packet(rc_input_t* packet);



#endif /* RECEIVER_H */