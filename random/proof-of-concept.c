#include <stdio.h>
#include <stdlib.h>


int main(){

    unsigned int  random=1804289383;
   //  random^0xdeadbeef;

    int key=random^0xdeadbeef;
    printf("%d\n",key);

    return 0;
}