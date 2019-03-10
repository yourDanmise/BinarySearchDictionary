/*
 *Created by yangguang(GYYA@student.unimelb.edu.au) on 2018/8/30.
 *This is the main function will be run.
 * to run the program type : dict1 datafile outputfile Adam Bob Jerry Hugh
 * or : dict1 datafile outputfile <keyfile.csv
 * For input line one use argc to count up input keys and argv to test each one out measuring the key comparisons
 * for input line two use stdin to scan in keyvalues and test each one out measuring the key comparisons
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readCSV.h"
#include "search2.h"
#include "outPut2.h"
#include "bst2.h"


#define MAX_LINE_SIZE 128

int main(int argc, char **argv) {
    //initialize a pointer point to the highest node of bst
    if(argv[1]==0) {
        printf( "failed to open file for reading\n");
        return 0;
    }
    else {
        if(argv[2]==0) {
            printf( "failed to open file for writing\n");
            return 0;
      }
      else{
          struct bst *dict=NULL;
          char athletesName[MAX_LINE_SIZE];
          float i = 0;
          float sum = 0;
          float average;
          //arg[1] is the input file name.
          //The founction of build the bst is include in the readCSV founction
          dict=readCSV(argv[1]);

          //This loop is used for read the athletesName from
          while(fgets(athletesName, MAX_LINE_SIZE, stdin)) {
              i++;
              //This 2 if is used to solve the new line character
              //if I don't do this, my every input will include a new line character
              //Thus I can't get the right result from search founction
              if(athletesName[strlen(athletesName)-1] == '\n') {
                  athletesName[strlen(athletesName)-1] = '\0';
              }
              if(athletesName[strlen(athletesName)-1] == '\r') {
                  athletesName[strlen(athletesName)-1] = '\0';
              }
              struct bst *result = search(dict, athletesName);

              //there are 4 argument in this founction
              //argv[2] is the output file name.
              //result is an array pointer pointing to the node in bst that has the same name with athletesName
              //this founction is used for printingthe information in the output filename.
              //And the count founction isincluded in this founction.
              //If there is some informations have the same key,
              //count will count the number of it and help the output founction to print it.
              outPut(argv[2], result, athletesName, dict);
              sum = sum + compareTime(dict ,athletesName);
              }
          average = sum/i;
          printf("average is %f\n",average );
          fflush(stdout);
          freeTree(dict);

          return 0;
        }
  }

}
