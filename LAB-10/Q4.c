#include <stdio.h>
#include <string.h>

int main(){
    char msg[200];
    int i, Option;

    printf("Enter Your Choice: (1 = Encrypt, 2 = Decrypt)\n");
    scanf("%d", &Option);
    
    getchar();

    switch(Option){

    case 1:
        printf("Enter message: ");
        fgets(msg, 200, stdin);

        for(i = 0; msg[i] != '\0'; i++){
            char ch = msg[i];

            if(ch >= 'a' && ch <= 'z')
                msg[i] = ((ch - 'a' + 3) % 26) + 'a';

            else if(ch >= 'A' && ch <= 'Z')
                msg[i] = ((ch - 'A' + 3) % 26) + 'A';
        }

        printf("Encrypted: %s", msg);
        break;


    case 2:
        printf("Enter message: ");
        fgets(msg, 200, stdin);

        for(i = 0; msg[i] != '\0'; i++){
            char ch = msg[i];

            if(ch >= 'a' && ch <= 'z')
                msg[i] = ((ch - 'a' - 3 + 26) % 26) + 'a';
            else if(ch >= 'A' && ch <= 'Z')
                msg[i] = ((ch - 'A' - 3 + 26) % 26) + 'A';
        }

        printf("Decrypted: %s", msg);
        break;

    default:
        printf("Invalid Choice.");
    }

    return 0;
}
