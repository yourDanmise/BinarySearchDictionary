dict1: main.o  bst.o readCSV.o search.o outPut.o count.o
	gcc -Wall -o dict1 main.o bst.o readCSV.o search.o outPut.o count.o

main.o: main.c readCSV.h search.h outPut.h bst.h
	gcc -Wall -c main.c -g -o main.o

bst.o: bst.c bst.h
	gcc -Wall  bst.c -c -g -o bst.o

readCSV.o: readCSV.c bst.h
	gcc -Wall readCSV.c -c -g -o readCSV.o

search.o: search.c bst.h
	gcc -Wall search.c -c -g -o search.o

outPut.o: outPut.c count.h bst.h
	gcc -Wall outPut.c -c -g -o outPut.o

count.o: count.c bst.h
	gcc -Wall count.c -c -g -o count.o

dict2: main2.o  bst2.o readCSV2.o search2.o outPut2.o count2.o
	gcc -Wall -o dict2 main2.o bst2.o readCSV2.o search2.o outPut2.o count2.o

main2.o: main2.c readCSV2.h search2.h outPut2.h bst2.h
	gcc -Wall -c main2.c -g -o main2.o

bst2.o: bst2.c bst2.h
	gcc -Wall  bst2.c -c -g -o bst2.o

readCSV2.o: readCSV2.c bst2.h
	gcc -Wall readCSV2.c -c -g -o readCSV2.o

search2.o: search2.c bst2.h
	gcc -Wall search2.c -c -g -o search2.o

outPut2.o: outPut2.c count2.h bst2.h
	gcc -Wall outPut2.c -c -g -o outPut2.o

count2.o: count2.c bst2.h
	gcc -Wall count2.c -c -g -o count2.o
