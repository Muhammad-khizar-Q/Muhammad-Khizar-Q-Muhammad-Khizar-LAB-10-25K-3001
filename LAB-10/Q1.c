#include <stdio.h>
#include <string.h>

int main() {

    char password[100];
    int hasUpper , hasDigit , hasSpecial ;
	int i;
	
	while(1){
	hasUpper = 0;
    hasDigit = 0;
    hasSpecial = 0;	
	
    printf("Enter Password: ");
    scanf("%s", password);

    int length = strlen(password);

    for(i = 0; i < length; i++) {
        if(password[i] >= 'A' && password[i] <= 'Z')
            hasUpper = 1;
        if(password[i] >= '0' && password[i] <= '9')
            hasDigit = 1;
        if(password[i] == '!' || password[i] == '@' ||
           password[i] == '#' || password[i] == '$' ||
           password[i] == '%')
            hasSpecial = 1;
    }
    if(length >= 8 && hasUpper && hasDigit && hasSpecial) {
        printf("\nPassword is STRONG.\n");
        break;
    } else {
        printf("\nPassword is WEAK. Reasons:\n");
        if(length < 8)
            printf("- Must be at least 8 characters long.\n");
        if(!hasUpper)
            printf("- Must contain at least one uppercase letter.\n");
        if(!hasDigit)
            printf("- Must contain at least one digit.\n");
        if(!hasSpecial)
            printf("- Must contain at least one special character (!, @, #, $, %).\n");
    }
    
}

    return 0;
}

