#include <stdio.h>
#include "core/rtos.h"

int main(void)
{
    printf("[SYSTEM] Démarrage VxWorks\n");

    rtos_init();
    rtos_start();

    printf("[SYSTEM] RTOS en fonctionnement, tâches actives\n");
    /* Dans un vrai système embarqué, on ne quitte pas main() */
    while (1)
        ;

    return 0;
}
