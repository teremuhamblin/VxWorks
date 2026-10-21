###### README.md >> markdown
# 📘 VxWorks

<p align="left">
<img src="https://img.shields.io/badge/Build-Passing-red">
<img src="https://img.shields.io/badge/Tests-Ready-red">
<img src="https://img.shields.io/badge/Coverage-ComingSoon-red">
</p>

<p align="left">
<img src="https://img.shields.io/badge/C-95.9%25-black">
<img src="https://img.shields.io/badge/Makefile-4.1%25-black">
</p>

<p align="left">
<img src="https://img.shields.io/badge/RTOS-VxWorks%20Inspired-purple">
<img src="https://img.shields.io/badge/Security-Military%20Grade-purple">
<img src="https://img.shields.io/badge/F%C3%89LIN-Tactical-purple">
</p>

---

### DOCUMENTATION
- *Système embarqué défense*
   - Type **FELIN**.
   - *Système d'exploitation embarqué* pédagogique inspiré des architectures militaires françaises
   - type *FÉLIN* / *systèmes modulaires embarqués*
   - ***ce projet contient des informations classifiées***

### Fonctionnalités
```text
1. Noyau RTOS
- Ordonnancement par priorités
- Tâches indépendantes
- Tick temps réel configurable

2. Watchdog temps réel
Surveille les tâches critiques :
- Sensors
- Comms
- Ballistics

Détection :
- blocage
- retard
- absence de ping

3. File de messages inter‑tâches (Message Queue)
Permet la communication interne :
- envoi de messages
- réception
- synchronisation

4. Modules embarqués
- Sensors : lecture capteurs (pseudo)
- Comms : communication système (pseudo)
- Health : surveillance CPU/mémoire
- Ballistics : calcul pseudo‑balistique
- Watchdog : sécurité
- MsgQueue : communication interne
```

>Build
```bash
make
```

>Exécution
- Sur cible **VxWorks** ou *environnement RTP* :
```tcl
-> rtpSp "felin-rtos.out"
```

### Architecture
```text
core/        → noyau RTOS
modules/     → tâches embarquées
config/      → paramètres système
src/         → point d'entrée
```

### Objectif pédagogique
```markdown
Ce projet reproduit :
- une architecture embarquée robuste
- un modèle RTOS militaire réaliste
- des mécanismes de sécurité (watchdog)
- des communications internes (message queue)
```

---
