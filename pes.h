@@ -0,0 +1,61 @@
// pes.h — Core data structures and constants for PES-VCS
//
// This file is PROVIDED. Do not modify.

#ifndef PES_H
#define PES_H

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

// ─── Constants ───────────────────────────────────────────────────────────────

#define HASH_SIZE 32        // SHA-256 produces 32 bytes
#define HASH_HEX_SIZE 64    // 32 bytes = 64 hex characters
#define PES_DIR ".pes"
#define OBJECTS_DIR ".pes/objects"
#define REFS_DIR ".pes/refs/heads"
#define INDEX_FILE ".pes/index"
#define HEAD_FILE ".pes/HEAD"
