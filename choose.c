#include<stdlib.h>
#include<math.h>
#include<stdio.h>

unsigned long fac (unsigned long a){
    unsigned long facul = 1;
    for (unsigned long i=1; i <= a; ++i){
        facul = facul * i;
    }
        return facul;
}

unsigned long choose(unsigned long n, unsigned long k){
    return fac(n)/(fac(k)*fac(n-k));
    
}

int main(int argc, char **argv) {
    if (argc != 3){
        printf("Falsche Zahl an parametern!");
        return EXIT_FAILURE;
    }
    unsigned long oben = atol(argv[1]);
    unsigned long unten = atol(argv[2]);
    unsigned long ergebnis = choose(oben, unten);
    printf("Das Ergebnis ist: %lu", ergebnis);
    return EXIT_SUCCESS;
}

