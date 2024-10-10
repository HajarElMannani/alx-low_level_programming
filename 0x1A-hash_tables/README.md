This is the project 0x1A. C - Hash tables done under ALx SE program
This directory contains the following tasks
------------------------------------------------------------------------------
Task 0. >>> ht = {}
Write a function that creates a hash table.

    Prototype: hash_table_t *hash_table_create(unsigned long int size);

Task 1. djb2
Write a hash function implementing the djb2 algorithm.

    Prototype: unsigned long int hash_djb2(const unsigned char *str);

Task 2. key -> index
Write a function that gives you the index of a key.

    Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);

Task 3. >>> ht['betty'] = 'cool'
Write a function that adds an element to the hash table.

    Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);

Task 4. >>> ht['betty']
Write a function that retrieves a value associated with a key.

    Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);

Task 5. >>> print(ht)
Write a function that prints a hash table.

    Prototype: void hash_table_print(const hash_table_t *ht);

Task 6. >>> del ht
Write a function that deletes a hash table.

    Prototype: void hash_table_delete(hash_table_t *ht);
