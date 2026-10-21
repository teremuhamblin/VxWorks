###### STRUCTURE.md >> markdown 
# 📦 Structure du projet

```text
VxWorks/
│
├── src/
│   ├── rtos.c
│   ├── scheduler.c
│   ├── watchdog.c
│   ├── queue.c
│   └── utils.c
│
├── modules/
│   ├── sensors.c
│   ├── comms.c
│   ├── health.c
│   └── ballistics.c
│
├── include/
│   ├── rtos.h
│   ├── scheduler.h
│   ├── watchdog.h
│   ├── queue.h
│   └── config.h
│
├── docs/
│   ├── architecture.md
│   ├── tasks.md
│   ├── ipc.md
│   ├── watchdog.md
│   └── ballistics.md
│
├── tests/
│   ├── test_watchdog.c
│   └── test_queue.c
│
└── .github/workflows/
    └── build.yml
```
