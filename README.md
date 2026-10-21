### Armée de Terre 🇫🇷
# 📘 VxWorks
   - Felin / RTOS / Inspired Kernel

### Système d’exploitation embarqué tactique
- — *Architecture modulaire militaire*
### Projet GitHub
- — **Armée de Terre**

---

### 🛰️ Felin‑RTOS
- — Noyau temps réel inspiré VxWorks
Système d’exploitation embarqué temps réel, inspiré des architectures VxWorks, INTEGRITY, et des systèmes tactiques du programme FÉLIN de l’Armée de Terre 🇫🇷.

Ce noyau fournit :
```markdown
- ordonnancement par priorités  
- watchdog militaire  
- message queue IPC  
- modules Sensors / Comms / Health / Ballistics  
- architecture modulaire  
- documentation complète  
- CI/CD GitHub Actions  
- compatibilité VxWorks / POSIX simulation  
```
---

🛡️ Badges techniques avancés

<p align="center">

<img src="https://img.shields.io/badge/Build-Passing-success">
<img src="https://img.shields.io/badge/Tests-Ready-success">
<img src="https://img.shields.io/badge/Coverage-ComingSoon-success">

<br>

<img src="https://img.shields.io/badge/C-95.9%25-success">
<img src="https://img.shields.io/badge/Makefile-4.1%25-success">

<br>

<img src="https://img.shields.io/badge/RTOS-VxWorks%20Inspired-success">
<img src="https://img.shields.io/badge/Security-Military%20Grade-success">
<img src="https://img.shields.io/badge/F%C3%89LIN-Tactical-sucess">

</p>

---

🧩 Structure du projet
`
FELIN-RTOS/
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
`

---

🛰️ Architecture générale du noyau

Diagramme ASCII
`
                +---------------------+
                |     Scheduler       |
                |  (Priority-based)   |
                +----------+----------+
                           |
        +------------------+------------------+
        |                  |                  |
+-------v-------+  +-------v-------+  +-------v-------+
|   Sensors     |  |    Comms      |  |   Ballistics  |
|  (tSensors)   |  |  (tComms)     |  |  (tBallistics)|
+-------+-------+  +-------+-------+  +-------+-------+
        |                  |                  |
        +------------------+------------------+
                           |
                    +------v------+
                    |   Queue     |
                    |  IPC MsgQ   |
                    +------+------+
                           |
                    +------v------+
                    |  Watchdog   |
                    +-------------+
`

---

🧠 Diagramme Mermaid — Flux RTOS
`mermaid
flowchart TD
    A[Scheduler] --> B[Sensors Task]
    A --> C[Comms Task]
    A --> D[Health Task]
    A --> E[Ballistics Task]

    B --> F[Message Queue]
    C --> F
    D --> F
    E --> F

    F --> G[Watchdog]

    G --> A
`

---

⚙️ Fonctionnement interne

🧵 Ordonnancement
- Priorité stricte  
- Tâches critiques : Ballistics, Sensors  
- Tâches secondaires : Comms, Health  
- Watchdog surveille les deadlines  

🔐 IPC (Message Queue)
- FIFO  
- Messages inter‑modules  
- Buffer circulaire  
- Gestion des débordements  

🛡️ Watchdog militaire
- Vérifie les tâches critiques  
- Timeout configurable  
- Reset logiciel  
- Mode dégradé si anomalie  

---

📡 Modules tactiques
| Module | Rôle | Priorité | Dossier |
|--------|------|----------|---------|
| Sensors | Acquisition terrain | Haute | /modules/sensors.c |
| Comms | Radio tactique | Moyenne | /modules/comms.c |
| Health | Intégrité système | Basse | /modules/health.c |
| Ballistics | Calculs balistiques | Très haute | /modules/ballistics.c |
| Watchdog | Surveillance | Critique | /src/watchdog.c |

---

🛠️ Compilation & Exécution

VxWorks
`
make vxworks
ld <rtos.o>
rtos_start
`

Linux Simulation (POSIX)
`
make sim
./felinrtossim
`

---

🧪 Tests unitaires
`
make tests
./tests/test_watchdog
./tests/test_queue
`

---

🧬 CI/CD — GitHub Actions
Workflow : .github/workflows/build.yml

Fonctions :
- compilation automatique  
- analyse statique (cppcheck)  
- artefacts RTOS  
- badge Build Passing  

---

📘 Documentation
Tous les documents sont dans /docs/ :

- architecture.md  
- tasks.md  
- ipc.md  
- watchdog.md  
- ballistics.md  

---

🗺️ Roadmap militaire
`
- [x] Watchdog militaire
- [x] Message Queue IPC
- [x] Architecture RTOS complète
- [ ] Scheduler interne avancé
- [ ] Module GPS tactique
- [ ] Module Radio cryptée
- [ ] Mode Combat / Mode Dégradé
- [ ] Logger sécurisé chiffré
- [ ] Analyse statique complète
`

---

🏁 Crédits
Développement : Teremu Hamblin  
Architecture : FELIN‑RTOS  
Inspiration : VxWorks, INTEGRITY, Armée de Terre 🇫🇷

---
