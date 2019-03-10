/*
 * Created by yangguang(GYYA@student.unimelb.edu.au) on 2018/8/30.
 * This file is used for printing the result to the output file
 * struct bst **result is the pointer points to the array which stores
 * the nodes adress of the athletes name user wants to search.
 * struct bst *dict is a pointer point to the top of the bst
 */
#include <stdio.h>
#include <stdlib.h>
#include "bst2.h"
#include "count2.h"

int outPut(char *outputFilename, struct bst *result, char *athletesName, struct bst *dict) {
    int resultSum = count(dict,athletesName);
    FILE *filePointer = NULL;
    filePointer = fopen(outputFilename, "a");
    if(NULL == filePointer) {
        printf("fail to write output file\n");
        exit(0);
    }
    if(resultSum == 0) {
        fprintf(filePointer,"%s --> NOTFOUND\n\n", athletesName);
    }
   else{
      while (result) {
           fprintf(filePointer,"%s -->ID: %s Sex: %s || Age: %s || Height: %s || Weight: %s || Team: %s || "
                "NOC: %s || Games: %s || Year: %s || Season: %s || City: %s || Sport: %s || Event: %s || Medal: %s ||\n\n",
                result->Name,result->ID,result->Sex,result->Age,result->Height,result->Weight,
                result->Team,result->NOC,result->Games,result->Year,
                result->Season,result->City,result->Sport,result->Event,result->Medal);
                result = ((result) -> next);
              }
   }

    fclose(filePointer);
    filePointer = NULL;

    return 0;
}
