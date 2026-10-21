#include <stdio.h>
#include <vxWorks.h>
#include <taskLib.h>
#include "rtos.h"
#include "../config/system_config.h"
#include "../modules/sensors.h"
#include "../modules/comms.h"
#include "../modules/health.h"
#include "../modules/ballistics.h"

static void rtos_init_tasks(void)
{
    taskSpawn("tSensors",    TASK_PRIO_SENSORS,    0, 4096, (FUNCPTR)sensors_task,    0,0,0,0,0,0,0,0,0,0);
    taskSpawn("tComms",      TASK_PRIO_COMMS,      0, 4096, (FUNCPTR)comms_task,      0,0,0,0,0,0,0,0,0,0);
    taskSpawn("tHealth",     TASK_PRIO_HEALTH,     0, 4096, (FUNCPTR)health_task,     0,0,0,0,0,0,0,0,0,0);
    taskSpawn("tBallistics", TASK_PRIO_BALLISTICS, 0, 4096, (FUNCPTR)ballistics_task, 0,0,0,0,0,0,0,0,0,0);
}

void rtos_init(void)
{
    printf("[RTOS] Initialisation noyau FELIN\n");
    rtos_init_tasks();
}

void rtos_start(void)
{
    printf("[RTOS] Noyau en fonctionnement (ordonnancement par priorités)\n");
    /* Le noyau s'appuie sur le scheduler VxWorks, pas de boucle ici */
}
