###### README.md >> markdown

# 📘 VxWorks
- **VxWorks-RTOS-Module**

```text
Module RTOS minimaliste inspiré des systèmes embarqués militaires :
- tâches temps réel
- ordonnancement déterministe
- boucle critique
- gestion simple des priorités
```

### 📦 Structure du projet

```text
VOIR ~/docs/STRUCTURE.md
```

>>Ce projet est pédagogique et compatible avec un environnement *VxWorks ou tout RTOS similaire*.

### Build
```bash
make
```

### Exécution (RTP)
```tcl
-> rtpSp "vxworks.out"
```

### Exécution (Kernel)
```tcl
-> rtosStart
```

---
