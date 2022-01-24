/* 
Ivan Delgado
RedID: 820683325
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> // tolower() function converts uppercase to lowercase
#define NUMOfCHARS 27 /* a-z plus ' */

// typedef declaration
typedef struct dictNode
{
    // isWord is true if the node represents the
    // last character of a word
    bool isWord;
    // Collection of nodes that represent subsequent characters in
    // words. Each node in the next dictNode*
    // array corresponds to a particular character that continues
    // the word if the node at the array index is NOT NULL:
    // e.g., if next[0] is NOT NULL, it means ‘a’ would be
    // one of the next characters that continues the current word;
    // while next[0] being NULL means there are no further words
    // with the next letter as ‘a’ along this path.
    struct dictNode *next[NUMOfCHARS]; // array of dictNode pointers
} dictNode;

// Insert a word to the dictionary
bool add(struct dictNode *dictnode, const char *remainingChars, const char *wordBeingInserted);

// Search for node that contains the last character of a string being searched
dictNode* findEndingNodeOfAStr(struct dictNode *dictnode, const char *remainingStr, const char *strBeingSearched);

// Counting words starting with a string
// No call by reference in C so int &count was replaced by int *count
void countWordsStartingFromANode(struct dictNode *dictnode, int *count);