/* 
Ivan Delgado
RedID: 820683325
*/

#include "dicttree.h" 

int main(int argc, char **argv[]) {
    // Make executable require two command line arguments 
    if (argc != 3) 
    {
        printf("Retry. Format: ./countwords dictionarysource.txt testfile*.txt\n");
        return 1;
    } 
    FILE *file1, *file2;
    // Do we have to read in the second text file as well?
    file1 = fopen(argv[1], "r");
    file2 = fopen(argv[2], "r");
    
    if (file1 && file2) {
        createNode();
        // Insert words in dictionarysource.txt to dictionary tree
        // Insert code here 

        /* Read words from another text file, and for each word read in:
        search, count, and print the number of words in the dictionary tree
        that start with it. */
        // Insert code here
        printf("test\n");
        fclose(file1);
    }
}