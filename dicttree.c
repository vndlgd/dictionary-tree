/* 
Ivan Delgado
RedID: 820683325
*/

#include "dicttree.h"

dictNode createNode()
{
    // Create a chunk of memory to store new node that we have 
    dictNode *newNode = malloc(sizeof *newNode);

    // Go through all characters and initialize all nodes to null
    int i;
    for (i = 0; i <= NUMOfCHARS; i++) 
    {
        newNode->next[i] = NULL;
    }
    newNode->isWord = false;
}

// Insert a word to the dictionary
bool add(struct dictNode *dictnode, const char *remainingChars, const char *wordBeingInserted) 
{
    // If node is set to null
    if (*dictnode == NULL) 
    {
        *dictnode = createNode();
    } 
    dictNode *tmp = *dictnode;
    int i;
    for (i = 0; i < sizeof(wordBeingInserted); i++) 
    {
        // if remainingChars is none then youre done, otherwise call add() again
        // recursive implementation 
        if (tmp->next[wordBeingInserted[i]] == NULL) 
        {
            *remainingChars = 
        }
    }
    return;
}

// Search for node that contains the last character of a string being searched
dictNode* findEndingNodeOfAStr(struct dictNode *dictnode, const char *remainingStr, const char *strBeingSearched) 
{
    return;
}

// Counting words starting with a string
void countWordsStartingFromANode(struct dictNode *dictnode, int *count)
{

}