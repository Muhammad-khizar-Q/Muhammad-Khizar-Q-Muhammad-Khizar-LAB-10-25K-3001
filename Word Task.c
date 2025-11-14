#include <stdio.h>
#include <string.h>

int main(){

    char Word[4][10] = {"AIR","FIRE","WATER","LAND"};
    int i, j;
    
    for(i=0;i<4;i++){
        puts(Word[i]);
    }

    printf("\n");
    for (i=0;i<4;i++){
        j=0;
        
        while(Word[i][j]!='\0'){
            printf(" %c\n",Word[i][j]);
            j++;
        }
        printf("\n");
    }

    return 0;
}

