#include<stdlib.h>
#include<stdio.h>

int main(int argc, char ** argv){
    if (argc !=2 ){
        printf("Falsche Zahl an parametern angegeben. Bitte nur eine Jahreszahl!");
    }
    else {
    int jahr = atoi(argv[1]);
    if (((jahr % 4 == 0) && (jahr % 100 != 0)) || (jahr % 400 == 0)) {
        printf("Das Jahr %d ist ein Schaltjahr :-)", jahr);
    }
    else {
        printf("Das Jahr %d ist leider kein Schaltjahr :-(", jahr);
    }
    return EXIT_SUCCESS;
    }
}
