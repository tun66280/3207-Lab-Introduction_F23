#include <stdio.h>
#include <stdlib.h>
#include <time.h>



char randchar(){
int randomCharacter=rand();
char randChar=(randomCharacter%(122-97) +1)+ 97;
return randChar;
}

