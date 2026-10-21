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

### 🧩 Structure complète du projet
```markdown
VOIR structure.md et architecture.md dans docs/
```

---

### 🛰️ Architecture générale du noyau

**Diagramme ASCII**
```schema
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
```

---

### 🧠 Diagramme Mermaid — Flux RTOS
```mermaid
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
```

---

### ⚙️ Fonctionnement interne

>🧵 Ordonnancement
- Priorité stricte  
- Tâches critiques : Ballistics, Sensors  
- Tâches secondaires : Comms, Health  
- Watchdog surveille les deadlines  

>🔐 IPC (Message Queue)
- FIFO  
- Messages inter‑modules  
- Buffer circulaire  
- Gestion des débordements  

>🛡️ Watchdog militaire
- Vérifie les tâches critiques  
- Timeout configurable  
- Reset logiciel  
- Mode dégradé si anomalie  

---

### 📡 Modules tactiques
| Module | Rôle | Priorité | Dossier |
|--------|------|----------|---------|
| Sensors | Acquisition terrain | Haute | /modules/sensors.c |
| Comms | Radio tactique | Moyenne | /modules/comms.c |
| Health | Intégrité système | Basse | /modules/health.c |
| Ballistics | Calculs balistiques | Très haute | /modules/ballistics.c |
| Watchdog | Surveillance | Critique | /src/watchdog.c |

---

### 🛠️ Compilation & Exécution

**VxWorks**
```text
make vxworks
ld <rtos.o>
rtos_start
```

**Linux Simulation (POSIX)**
```text
make sim
./felinrtossim
```

---

### 🧪 Tests unitaires
```text
make tests
./tests/test_watchdog
./tests/test_queue
```

---

### 🧬 CI/CD — GitHub Actions
Workflow : **.github/workflows/build.yml**

Fonctions :
```text
- compilation automatique  
- analyse statique (cppcheck)  
- artefacts RTOS  
- badge Build Passing  
```

---

### 📘 Documentation
Tous les documents sont dans /docs/ :
```text
- architecture.md  
- tasks.md  
- ipc.md  
- watchdog.md  
- ballistics.md  
```

---

### 🗺️ Roadmap militaire
```text
- [x] Watchdog militaire
- [x] Message Queue IPC
- [x] Architecture RTOS complète
- [ ] Scheduler interne avancé
- [ ] Module GPS tactique
- [ ] Module Radio cryptée
- [ ] Mode Combat / Mode Dégradé
- [ ] Logger sécurisé chiffré
- [ ] Analyse statique complète
````

---

### 🏁 Crédits
- Développement : The MadDoG.tmdg 
- Architecture : Felin.RTOS 
- Inspiration : VxWorks, INTEGRITY.

---

![Armée de Terre](https://img.shields.io/badge/Arm%C3%A9e_de_Terre-Soutien_Officiel-blue?logo=france&logoColor=white)
![Légion Étrangère](https://img.shields.io/badge/L%C3%A9gion_%C3%89trang%C3%A8re-Honneur_et_Fid%C3%A9lit%C3%A9-success?logo=france&logoColor=white)
