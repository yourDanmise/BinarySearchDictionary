/*
 * Created by yangguang(GYYA@student.unimelb.edu.au) on 2018/8/30.
 * This file is used for build the bst(bstInsert) and free the tree's memory(freeTree).
 * I refer to the code from Grady writing in the solution vedio of workshop4
 */
/* bst.c */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "bst2.h"

//parent is the pointer which is used store the adress of bstInsert
//argument is the pointer point to the array which stores data read from the input file
struct bst *bstInsert(struct bst *parent, char** argument) {
    struct bst **insertLocation = &parent;//insertLocation是一个指向指针的指针，
    while(*insertLocation){
        // if(data < (*insertLocation)->data)//strcmp（s1,s2）
        if( strcmp(argument[1], (*insertLocation) -> Name) < 0) {
            insertLocation = &((*insertLocation) -> left);
        }
        else if(strcmp(argument[1], (*insertLocation) -> Name) == 0) {
            insertLocation = &((*insertLocation) -> next);
        }
        else{
            insertLocation = &((*insertLocation) -> right);
        }
    }
    //malloc the memory for build a new node of tree.
    *insertLocation = (struct bst *)malloc(sizeof(struct bst));
    assert(*insertLocation);
    (*insertLocation) -> left = NULL;
    (*insertLocation) -> right = NULL;
    (*insertLocation) -> next = NULL;

    //malloc the memory for each string and copy the string from input file to the tree
    (*insertLocation) -> ID = (char*)malloc(strlen(argument[0]) + 1);
    assert((*insertLocation) -> ID);
    strcpy(((*insertLocation) -> ID), argument[0]);

    (*insertLocation) -> Name = (char*)malloc(strlen(argument[1]) + 1);
    assert((*insertLocation) -> Name);
    strcpy(((*insertLocation) -> Name), argument[1]);

    (*insertLocation) -> Sex = (char*)malloc(strlen(argument[2]) + 1);
    assert((*insertLocation) -> Sex);
    strcpy(((*insertLocation) -> Sex), argument[2]);

    (*insertLocation) -> Age = (char*)malloc(strlen(argument[3]) + 1);
    assert((*insertLocation) -> Age);
    strcpy(((*insertLocation) -> Age), argument[3]);

    (*insertLocation) -> Height = (char*)malloc(strlen(argument[4]) + 1);
    assert((*insertLocation) -> Height);
    strcpy(((*insertLocation) -> Height), argument[4]);

    (*insertLocation) -> Weight = (char*)malloc(strlen(argument[5]) + 1);
    assert((*insertLocation) -> Weight);
    strcpy(((*insertLocation) -> Weight), argument[5]);

    (*insertLocation) -> Team = (char*)malloc(strlen(argument[6]) + 1);
    assert((*insertLocation) -> Team);
    strcpy(((*insertLocation) -> Team), argument[6]);

    (*insertLocation) -> NOC = (char*)malloc(strlen(argument[7]) + 1);
    assert((*insertLocation) -> NOC);
    strcpy(((*insertLocation) -> NOC), argument[7]);

    (*insertLocation) -> Games = (char*)malloc(strlen(argument[8]) + 1);
    assert((*insertLocation) -> Games);
    strcpy(((*insertLocation) -> Games), argument[8]);

    (*insertLocation) -> Year = (char*)malloc(strlen(argument[9]) + 1);
    assert((*insertLocation) -> Year);
    strcpy(((*insertLocation) -> Year), argument[9]);

    (*insertLocation) -> Season = (char*)malloc(strlen(argument[10]) + 1);
    assert((*insertLocation) -> Season);
    strcpy(((*insertLocation) -> Season), argument[10]);

    (*insertLocation) -> City = (char*)malloc(strlen(argument[11]) + 1);
    assert((*insertLocation) -> City);
    strcpy(((*insertLocation) -> City), argument[11]);

    (*insertLocation) -> Sport = (char*)malloc(strlen(argument[12]) + 1);
    assert((*insertLocation) -> Sport);
    strcpy(((*insertLocation) -> Sport), argument[12]);

    (*insertLocation) -> Event = (char*)malloc(strlen(argument[13]) + 1);
    assert((*insertLocation) -> Event);
    strcpy(((*insertLocation) -> Event), argument[13]);

    (*insertLocation) -> Medal = (char*)malloc(strlen(argument[14]) + 1);
    assert((*insertLocation) -> Medal);
    strcpy(((*insertLocation) -> Medal), argument[14]);

    return parent;

}

void freeTree(struct bst *parent) {
    if(! parent) {
        return;
    }
    /* free every string in the node */
    freeTree(parent -> left);
    freeTree(parent -> right);
    freeTree(parent -> next);
    free(parent -> ID);
    free(parent -> Name);
    free(parent -> Sex);
    free(parent -> Age);
    free(parent -> Height);
    free(parent -> Weight);
    free(parent -> Team);
    free(parent -> NOC);
    free(parent -> Games);
    free(parent -> Year);
    free(parent -> Season);
    free(parent -> City);
    free(parent -> Sport);
    free(parent -> Event);
    free(parent -> Medal);

    free(parent);
}
