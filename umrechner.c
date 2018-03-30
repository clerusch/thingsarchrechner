#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char **argv){
    if(argc != 4){
        return EXIT_SUCCESS;
    }
    float zahl = atof(argv[3]);
    float neuzahl;
    int starteinheit;
    int endeinheit;
    if(strcmp(argv[1], "kg") == 0){
        starteinheit = 1;
    }
    else if (strcmp(argv[1], "m") == 0){
            starteinheit = 2;
    }
    switch (starteinheit){
         case 1:
             if (strcmp(argv[2], "g") == 0) {endeinheit = 1;}
             else if(strcmp(argv[2], "tonne") == 0) {endeinheit = 2;}
             switch (endeinheit){
                case 1:
                    neuzahl = zahl * 1000;
                    break;
                case 2:
                    neuzahl = zahl / 1000;
                    break;
             }
             break;
         case 2:
             if (strcmp(argv[2], "mm") == 0) {endeinheit = 1;}
             else if (strcmp(argv[2], "km") == 0) {endeinheit = 2;}
             switch (endeinheit){
                 case 1:
                     neuzahl = zahl * 1000;
                     break;
                 case 2:
                     neuzahl = zahl / 1000;
                     break;
             }
             break;
     }
     printf("%f %s sind %f %s.", zahl, argv[1], neuzahl, argv[2]);
     return EXIT_SUCCESS;
}
