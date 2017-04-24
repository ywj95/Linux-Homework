main:main.o bubblesort.o insertsort.o selectsort.o
	gcc main.o bubblesort.o insertsort.o selectsort.o -o main
main.o:main.c
	gcc -c main.c
bubblesort.o:bubblesort.c
	gcc -c bubblesort.c
insertsort.o:insertsort.c
	gcc -c insertsort.c
selectsort.o:selectsort.c
	gcc -c selectsort.c

clean:
	rm main *.o
