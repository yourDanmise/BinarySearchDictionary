/*
 * Created by yangguang(GYYA@student.unimelb.edu.au) on 2018/8/30.
 * This function is used for searching each  athlete's name in the dictionary.
 * Searching athletesName from the top of bst(*parent)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst2.h"

struct bst *search(struct bst *parent, char* athletesName) {
    //resultCount is used to count how many times the athletesName
    //is appeared in the dictionary.
    int searchTime = 0;
    //result is the pointer points to the array which stores the nodes
    //adress of the athletes name user wants to search.
    struct bst *result = (struct bst *)malloc(sizeof(struct bst) * 128);
    struct bst **searchLocation = &parent;
    if (parent == NULL) {
        printf("dictionary is not available!\n");
        exit(0);
    }
    //searching the tree
    while(* searchLocation) {
        searchTime++;
        if(strcmp(athletesName, (*searchLocation)->Name) == 0) {
            result = *searchLocation;
            break;
        }
        else if((strcmp(athletesName, (*searchLocation) -> Name) < 0) && (NULL != (*searchLocation) -> left)) {
            searchLocation = &((*searchLocation) -> left);
        }
        else if(( strcmp(athletesName,(*searchLocation) -> Name) > 0) && (NULL != (*searchLocation) -> right)) {
            searchLocation = &((*searchLocation) -> right);
        }
        else{
            break;
        }

    }
    printf("%s --> %d\n", athletesName, searchTime);
        return result;
}

int compareTime(struct bst *parent, char* athletesName) {
   //resultCount is used to count how many times the athletesName
   //is appeared in the dictionary.
   int searchTime = 0;
   //result is the pointer points to the array which stores the nodes
   //adress of the athletes name user wants to search.
   struct bst *result = (struct bst *)malloc(sizeof(struct bst) * 128);
   struct bst **searchLocation = &parent;
   if (parent == NULL) {
       printf("dictionary is not available!\n");
       exit(0);
   }
   //searching the tree
   while(* searchLocation) {
       searchTime++;
       if(strcmp(athletesName, (*searchLocation)->Name) == 0) {
           result = *searchLocation;
           break;
       }
       else if((strcmp(athletesName, (*searchLocation) -> Name) < 0) && (NULL != (*searchLocation) -> left)) {
           searchLocation = &((*searchLocation) -> left);
       }
       else if(( strcmp(athletesName,(*searchLocation) -> Name) > 0) && (NULL != (*searchLocation) -> right)) {
           searchLocation = &((*searchLocation) -> right);
       }
       else{
           break;
       }

   }
       //printf("%s --> %d\n", athletesName, searchTime);
       return searchTime;
}
