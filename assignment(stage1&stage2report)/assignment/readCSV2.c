/*
 * Created by yangguang(GYYA@student.unimelb.edu.au) on 2018/8/30.
 * This file is used for read the input csv file,
 * char *input is the name of input file
 * The founction of build the bst (bstInsert) is include in this file.
 * This founction returns a pointer point to the top of the
 * binary search tree.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bst2.h"

#define MAX_LINE_SIZE 512

struct bst *readCSV(char* input) {

    FILE *filePointer;
    filePointer = fopen(input, "r");

    if (!filePointer) {
        fprintf(stderr, "failed to open file for reading\n");
        exit(0);
    }

    char line[MAX_LINE_SIZE];
    //result is the outcome of read csv, and divided by the ','.
    char *result = NULL;
    //bst is a bst pointer which will be used in bstInsert and points to
    //the top of the binary search tree.
    struct bst *bst = NULL;
    //element is the argument of each column. The csv file has 15 column.
    char *element[15];

    while(fgets(line, MAX_LINE_SIZE, filePointer) != NULL) {
        result = strtok(line, ",");
		    int i;
        for(i=0;i<15;i++) {
            element[i] = result;
            result = strtok(NULL, ",");
        }
        //avoid of reading the new line character
        if(element[14][strlen(element[14])-1] == '\n') {
            element[14][strlen(element[14])-1] = '\0';
        }
        if(element[14][strlen(element[14])-1] == '\r') {
            element[14][strlen(element[14])-1] = '\0';
        }
        //build the bst by bstInsert.
        bst = bstInsert(bst, element);
    }
    fclose (filePointer);
    return bst;

}
