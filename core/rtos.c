#include <stdio.h>
#include <vxWorks.h>
#include <taskLib.h>
#include "rtos.h"

#include "../config/system_config.h"
#include "../modules/sensors.h"
#include "../modules/comms.h"
#include "../modules/health.h"
#include "../modules/ballistics.h"
#include "../modules/watchdog.h"
#include "../modules/msgqueue.h"

/* ---------------------------------------------------------
   Initialisation des tâches du système embarqué FELIN
   --------------------------------------------------------- */
static void rtos_init_tasks(void)
{
    /* Initialisation de la file de messages inter‑tâches */
    msgqueue_init();

    /* Tâches principales */
    taskSpawn("tSensors",    TASK_PRIO_SENSORS,    0, 4096,
              (FUNCPTR)sensors_task,    0,0,0,0,0,0,0,0,0,0);

    taskSpawn("tComms",      TASK_PRIO_COMMS,      0, 4096,
              (FUNCPTR)comms_task,      0,0,0,0,0,0,0,0,0,0);

    taskSpawn("tHealth",     TASK_PRIO_HEALTH,     0, 4096,
              (FUNCPTR)health_task,     0,0,0,0,0,0,0,0,0,0);

    taskSpawn("tBallistics", TASK_PRIO_BALLISTICS, 0, 4096,
              (FUNCPTR)ballistics_task, 0,0,0,0,0,0,0,0,0,0);

    /* Tâches système supplémentaires */
    taskSpawn("tWatchdog",   60,                   0, 4096,
              (FUNCPTR)watchdog_task,   0,0,0,0,0,0,0,0,0,0);

    taskSpawn("tMsgQueue",   85,                   0, 4096,
              (FUNCPTR)msgqueue_task,   0,0,0,0,0,0,0,0,0,0);
}

/* ---------------------------------------------------------
   Initialisation du noyau RTOS
   --------------------------------------------------------- */
void rtos_init(void)
{
    printf("[RTOS] Initialisation du noyau FELIN\n");
    printf("[RTOS] Configuration système chargée\n");

    rtos_init_tasks();

    printf("[RTOS] Tâches initialisées\n");
}

/* ---------------------------------------------------------
   Démarrage du noyau
   --------------------------------------------------------- */
void rtos_start(void)
{
    printf("[RTOS] Noyau en fonctionnement (ordonnancement par priorités)\n");
    printf("[RTOS] Toutes les tâches sont actives\n");

    /* Le scheduler VxWorks prend le relais */
}
