#include<stdlib.h>
#include<stdio.h>

int main(int argc, char ** argv){
    if (argc !=2 ){
        printf("Falsche Zahl an parametern angegeben. Bitte nur eine Jahresazhl!");
    }
    int jahr = atoi(argv[1]);
    if (((jahr % 4 == 0) && (jahr % 100 != 0)) || (jahr % 400 == 0)) {
        printf("Das Jahr %s ist ein Schaltjahr :-)", jahr);
    }
    else {
        printf("Das Jahr %s ist leider kein Schaltjahr :-(", jahr);
    }
    return EXIT_SUCCESS;
}
