@@ -0,0 +1,97 @@
// test_objects.c — Phase 1 test program
//
// Compile and run:
//   gcc -Wall -Wextra -O2 -o test_objects test_objects.c object.c -lcrypto
//   ./test_objects

#include "pes.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

// Forward declarations for object.c functions
int object_write(ObjectType type, const void *data, size_t len, ObjectID *id_out);
int object_read(const ObjectID *id, ObjectType *type_out, void **data_out, size_t *len_out);
int object_exists(const ObjectID *id);
void object_path(const ObjectID *id, char *path_out, size_t path_size);

void test_blob_storage(void) {
    const char *content = "Hello, PES-VCS!\n";
    ObjectID id;

    int rc = object_write(OBJ_BLOB, content, strlen(content), &id);
    assert(rc == 0);

    char hex[HASH_HEX_SIZE + 1];
    hash_to_hex(&id, hex);
    printf("Stored blob with hash: %s\n", hex);

    char path[512];
    object_path(&id, path, sizeof(path));
    printf("Object stored at: %s\n", path);
