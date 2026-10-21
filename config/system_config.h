---

### ⚙️ `config/system_config.h`

```c
#ifndef SYSTEM_CONFIG_H
#define SYSTEM_CONFIG_H

#define RTOS_TICK_MS          10      /* tick de base */
#define TASK_PRIO_SENSORS     80
#define TASK_PRIO_COMMS       90
#define TASK_PRIO_HEALTH      100
#define TASK_PRIO_BALLISTICS  70

#endif
