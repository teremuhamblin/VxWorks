/* ballistics.c */
#include <stdio.h>
#include <vxWorks.h>
#include <taskLib.h>
#include "../config/system_config.h"

void ballistics_task(void)
{
    printf("[BALLISTICS] Tâche pseudo-balistique démarrée\n");

    while (1)
    {
        printf("[BALLISTICS] Calcul trajectoire simplifiée (modèle pédagogique)\n");
        taskDelay(20); /* ~200 ms */
    }
}
