/*
   PowerShell Desired State Configuration for Linux

   Copyright (c) Microsoft Corporation

   All rights reserved. 

   MIT License

   Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the ""Software""), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#ifndef _mof_hash_h
#define _mof_hash_h

#include <MI.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
**==============================================================================
**
** String Hash table
**  Why? - Parse has to serach list of classes, instance alias already defined
**  in the mof buffer to detect re-definition of class and instance alias.
**  Linear search will end up with O(N^2) and unaccpetable if processing 
**  large number of class/aliases, say 1M. So introduce hashtable here to
**  reduce the search time to O(1), while it will take O(N) to build up the
**  hashtable. Whenever the search target size is bigger than HASH_THRESHOLD,
**  parse will start to use hashtable.
**
**==============================================================================
*/
/* Invalid position means not found the string in hash table */
#define HASH_INVALID_POS 0xFFFFFFFF
/* Defines Hash table size, a big prime number */
#define HASH_TABLE_SIZE 1000003
/* Fallback to hash search beyond this threshold */
#define HASH_THRESHOLD 128
/* A number used to caculate hash value */
#define HASH_SEED_PRIME_NUMBER 1313038763
/* Defines hash node */
typedef struct _HashNode *HashNodePtr;
typedef struct _HashNode
{
    MI_Uint32 pos; /* Index of the string in the array */
                   /* Assume the string(s) are stored in */
                   /* another separate array, such as MOF_ClassDeclList */
    const MI_Char* source; /* source string of the node */
    MI_Uint32 code; /* Another hash code of the string to */
                    /* fastern search on collision entry*/
    HashNodePtr next; /* Next node with same hash value */
}
HashNode;
/* Defines structure of string hash table */
/* TODO: Extend and reuse hashtable structure defined in base/hashtable.h */
/* Need hashtable take a batch to allocate memory */
typedef struct _StringHash
{
    HashNodePtr* nodes;
}StringHash;


/*
**==============================================================================
**
** Initialize hash table
**
**==============================================================================
*/
int StringHash_Init(
    _In_ void * mofbatch,
    _Inout_ StringHash *hash);

/*
**==============================================================================
**
** Add string to hash table
**
**==============================================================================
*/
int StringHash_Add(
    _In_ void* mofbatch,
    _Inout_ StringHash *hash,
    _In_ MI_Uint32 pos,
    _In_ MI_Uint32 code,
    _In_z_ const MI_Char* str);

/*
**==============================================================================
**
** Find string position tring to hash table
**  Return: index of the string in original array
**==============================================================================
*/
MI_Uint32 StringHash_Find(
    _In_ StringHash *hash,
    _In_z_ const MI_Char* name);

#ifdef __cplusplus
}
#endif
#endif /* _mof_hash_h */
