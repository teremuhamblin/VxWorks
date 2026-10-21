###### STRUCTURE.md >> markdown 
# 📦 Structure du projet

<p align="left">

  <img src="https://img.shields.io/badge/Security-Military_Grade-black?style=for-the-badge">
  <img src="https://img.shields.io/badge/Crypto-AES_256-black?style=for-the-badge">
  <img src="https://img.shields.io/badge/Integrity-Health_Check-black?style=for-the-badge">

</p>

--- 

```text
VxWorks/
│
├── README.md
├── LICENCE 
├── Makefile
├── .gitignore
├── .github/
│   ├── ISSUE_TEMPLATE/
│   ├── PULL_REQUEST_TEMPLATE/
│   ├── DISCUSSION.md
│   ├── workflows/
│   └── .gitkeep
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
│   ├── structure.md
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
