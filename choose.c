#include<stdlib.h>
#include<math.h>
#include<stdio.h>

int main(int argc, char ** argv) {
    if (argc != 3){
        printf("Falsche Zahl an parametern!");
        return EXIT_FAILURE;
    }
    unsigned long oben = atoi(argv[1]);
    unsigned long unten = atoi(argv[2]);
    unsigned long i = 0;
    unsigned long sum = 0;
    for(i=1; i <= (oben-1); ++i){
        sum += i;
    }
    unsigned long fac = 1;
    for(i=1; i<=unten; ++i){
        fac *= i;
    }
    unsigned long choose(unsigned long n, unsigned long k){
        unsigned long ergebnis = (powl(n,k) - sum)/fac;
        printf("%ld ist das Ergebnis.", ergebnis);
        return EXIT_SUCCESS;
    }
    choose(oben, unten);
    return EXIT_SUCCESS;
}
