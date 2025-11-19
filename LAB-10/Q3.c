#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int v=0,c=0,d=0,s=0,i;

    printf("Enter string: ");
    gets(str);

    for(i=0; str[i]; i++){
        char ch = str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        	v++;
        }
        else if(ch >= '0' && ch <= '9'){
            d++;
        }
         else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
            c++;
        }
        else if(ch == ' '){
            s++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\n",v,c,d,s);
    return 0;
}

