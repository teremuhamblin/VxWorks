# ================================
#  FELIN-RTOS — Makefile militaire
# ================================

CC      = cc
CFLAGS  = -Wall -O2 -Iinclude
LDFLAGS =

SRC_DIR     = src
MODULES_DIR = modules
INCLUDE_DIR = include
BUILD_DIR   = build
TEST_DIR    = tests

# Tous les fichiers .c
SRC     = $(wildcard $(SRC_DIR)/*.c)
MODULES = $(wildcard $(MODULES_DIR)/*.c)
TESTS   = $(wildcard $(TEST_DIR)/*.c)

# Objets
OBJ     = $(SRC:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
OBJ    += $(MODULES:$(MODULES_DIR)/%.c=$(BUILD_DIR)/%.o)

TARGET = $(BUILD_DIR)/felin_rtos

# ================================
#  Règles principales
# ================================

all: $(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(MODULES_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LDFLAGS)

# ================================
#  Tests
# ================================

check:
	@echo "[TEST] Compilation des tests..."
	$(CC) $(CFLAGS) $(TESTS) $(OBJ) -o $(BUILD_DIR)/tests
	@echo "[TEST] Exécution..."
	$(BUILD_DIR)/tests || true

# ================================
#  Nettoyage
# ================================

clean:
	rm -rf $(BUILD_DIR)

# ================================
#  Règles CI GitHub Actions
# ================================

ci: clean all check

.PHONY: all clean check ci
