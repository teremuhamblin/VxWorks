#include "rtos.h"
#include "scheduler.h"
#include "watchdog.h"
#include "queue.h"

#include <stdio.h>

int main(void)
{
    printf("[RTOS] Initialisation du noyau FELIN...\n");

    rtos_init();
    rtos_start();

    printf("[RTOS] Noyau opérationnel.\n");

    return 0;
}
