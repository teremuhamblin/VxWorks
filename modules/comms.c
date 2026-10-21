/* comms.c */
#include <stdio.h>
#include <vxWorks.h>
#include <taskLib.h>
#include "../config/system_config.h"

void comms_task(void)
{
    printf("[COMMS] Tâche communications démarrée\n");

    while (1)
    {
        printf("[COMMS] Échange données avec système de commandement (pseudo)\n");
        taskDelay(30); /* ~300 ms */
    }
}
