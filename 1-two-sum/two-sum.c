#include <stdlib.h>

#define TABLE_SIZE 10000

typedef struct {
    int key;
    int value;
} Pair;

int hash(int key) {
    return abs(key) % TABLE_SIZE;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    Pair* table[TABLE_SIZE] = {0}; // Hash table

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int h = hash(complement);
        
        while (table[h]) {
            if (table[h]->key == complement) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = table[h]->value;
                result[1] = i;
                *returnSize = 2;
                return result;
            }
            h = (h + 1) % TABLE_SIZE; // Linear probing
        }

        // Insert current num into the hash table
        h = hash(nums[i]);
        while (table[h]) {
            h = (h + 1) % TABLE_SIZE;
        }
        table[h] = (Pair*)malloc(sizeof(Pair));
        table[h]->key = nums[i];
        table[h]->value = i;
    }

    *returnSize = 0;
    return NULL; 
}
