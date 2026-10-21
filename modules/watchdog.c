#include <stdio.h>
#include <string.h>
#include <vxWorks.h>
#include <taskLib.h>
#include "../config/system_config.h"

static UINT32 lastPingSensors = 0;
static UINT32 lastPingComms = 0;
static UINT32 lastPingBallistics = 0;

void watchdog_ping(const char *taskName)
{
    UINT32 now = tickGet();

    if (strcmp(taskName, "SENSORS") == 0)
        lastPingSensors = now;

    if (strcmp(taskName, "COMMS") == 0)
        lastPingComms = now;

    if (strcmp(taskName, "BALLISTICS") == 0)
        lastPingBallistics = now;
}

void watchdog_task(void)
{
    printf("[WATCHDOG] Surveillance des tâches\n");

    while (1)
    {
        UINT32 now = tickGet();

        if (now - lastPingSensors > 200)
            printf("[WATCHDOG] ALERTE: SENSORS ne répond plus\n");

        if (now - lastPingComms > 200)
            printf("[WATCHDOG] ALERTE: COMMS ne répond plus\n");

        if (now - lastPingBallistics > 200)
            printf("[WATCHDOG] ALERTE: BALLISTICS ne répond plus\n");

        taskDelay(50);
    }
}
