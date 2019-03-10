/*
 * Created by yangguang(GYYA@student.unimelb.edu.au) on 2018/8/26.
 * Infact, this founction is almost the same with search.
 * But one founction just can return one argument.
 * Thus, I have to run this program again to return the count sum number.
 * If you read this line could you please give me some advises about
 * how to solve this problem that I don't need to run the same program twice?
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst2.h"

    int count(struct bst *parent, char* athletesName) {

    int resultCount = 0;
    struct bst **searchLocation = &parent;
    if (parent == NULL) {
        printf("dictionary is not available!");
        exit(0);
    }

    while(* searchLocation) {

        if(strcmp(athletesName, (*searchLocation) -> Name) == 0){
            resultCount++;
            break;
        }
        else if((strcmp(athletesName, (*searchLocation) -> Name) < 0) && (NULL != (*searchLocation) -> left)){
            searchLocation = &((*searchLocation) -> left);
        }
        else if(( strcmp(athletesName, (*searchLocation) -> Name) > 0) && (NULL != (*searchLocation) -> right)) {
            searchLocation = &((*searchLocation) -> right);
        }
        else{
            break;
        }

    }
    return resultCount;


}
