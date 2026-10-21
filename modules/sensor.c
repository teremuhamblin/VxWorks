/* sensors.c */
#include <stdio.h>
#include <vxWorks.h>
#include <taskLib.h>
#include "../config/system_config.h"

void sensors_task(void)
{
    printf("[SENSORS] Tâche capteurs démarrée\n");

    while (1)
    {
        printf("[SENSORS] Lecture capteurs (position, environnement, état équipement)\n");
        taskDelay(50); /* ~500 ms */
    }
}
