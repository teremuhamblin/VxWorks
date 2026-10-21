#ifndef MSGQUEUE_H
#define MSGQUEUE_H

void msgqueue_init(void);
void msgqueue_send(const char *msg);
void msgqueue_task(void);

#endif
