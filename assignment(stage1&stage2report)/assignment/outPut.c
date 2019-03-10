/*
 * Created by yangguang(GYYA@student.unimelb.edu.au) on 2018/8/26.
 * This file is used for printing the result to the output file
 * struct bst **result is the pointer points to the array which stores
 * the nodes adress of the athletes name user wants to search.
 * struct bst *dict is a pointer point to the top of the bst
 */
#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
#include "count.h"

int outPut(char *outputFilename, struct bst **result, char *athletesName, struct bst *dict) {
    //counting there are how many same key datas in the dictionary
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
        int i;
       for(i=0; i<resultSum; i++) {
           fprintf(filePointer,"%s -->ID: %s Sex: %s || Age: %s || Height: %s || Weight: %s || Team: %s || "
                   "NOC: %s || Games: %s || Year: %s || Season: %s || City: %s || Sport: %s || Event: %s || Medal: %s ||\n\n",
                result[i]->Name,result[i]->ID,result[i]->Sex,result[i]->Age,result[i]->Height,result[i]->Weight,
                result[i]->Team,result[i]->NOC,result[i]->Games,result[i]->Year,
                result[i]->Season,result[i]->City,result[i]->Sport,result[i]->Event,result[i]->Medal);
       }
   }

    fclose(filePointer);
    filePointer = NULL;

    return 0;
}
