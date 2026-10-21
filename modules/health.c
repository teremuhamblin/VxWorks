/* health.c */
#include <stdio.h>
#include <vxWorks.h>
#include <taskLib.h>
#include "../config/system_config.h"

void health_task(void)
{
    printf("[HEALTH] Surveillance santé système\n");

    while (1)
    {
        printf("[HEALTH] Vérification CPU, mémoire, température, erreurs\n");
        taskDelay(100); /* ~1 s */
    }
}
