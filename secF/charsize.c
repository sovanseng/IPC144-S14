#include <stdio.h>

int main(void){
    unsigned char c=127;
    c = c+1;
    int intrep=c;

    printf("%d\n",intrep);
    return 0;
}
