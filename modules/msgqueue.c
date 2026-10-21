#include <stdio.h>
#include <vxWorks.h>
#include <msgQLib.h>
#include <taskLib.h>

static MSG_Q_ID mq;

void msgqueue_init(void)
{
    mq = msgQCreate(10, 64, MSG_Q_PRIORITY);
    printf("[MSGQ] File de messages initialisée\n");
}

void msgqueue_send(const char *msg)
{
    msgQSend(mq, (char*)msg, strlen(msg)+1, WAIT_FOREVER, MSG_PRI_NORMAL);
}

void msgqueue_task(void)
{
    char buffer[64];

    printf("[MSGQ] Tâche de réception démarrée\n");

    while (1)
    {
        if (msgQReceive(mq, buffer, sizeof(buffer), WAIT_FOREVER) != ERROR)
        {
            printf("[MSGQ] Message reçu: %s\n", buffer);
        }
    }
}
