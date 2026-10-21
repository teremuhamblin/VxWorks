#include <stdio.h>
#include <vxWorks.h>
#include <taskLib.h>
#include "rtos.h"

static void rtos_critical_task(void)
{
    printf("[RTOS] Démarrage de la tâche critique\n");

    while (1)
    {
        printf("[RTOS] Cycle critique exécuté\n");
        taskDelay(30); /* 30 ticks ~ 0.5 sec */
    }
}

void rtosStart(void)
{
    printf("[RTOS] Initialisation du module\n");

    taskSpawn("tCritical",
              90,      /* priorité haute */
              0,
              4096,
              (FUNCPTR)rtos_critical_task,
              0,0,0,0,0,0,0,0,0,0);
}
