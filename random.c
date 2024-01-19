
#include <stdlib.h>

char randchar(){
    int num =  rand() % (90 - 65 + 1) + 65;
    return (char)num;
}