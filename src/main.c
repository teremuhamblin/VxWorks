#include <stdio.h>
#include <unistd.h>
#include "rtos.h"

int main(void)
{
    printf("[RTOS] Module RTP lancé\n");

    for (int i = 0; i < 5; i++)
    {
        printf("[RTOS] Boucle RTP %d\n", i);
        sleep(1);
    }

    printf("[RTOS] Fin du module RTP\n");
    return 0;
}
