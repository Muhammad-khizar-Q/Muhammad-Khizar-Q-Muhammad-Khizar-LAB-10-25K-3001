#include <stdio.h>
#include <string.h>
int main(){
	
	char email[100];
	
	printf("Enter Your Email:");
	fgets(email,100,stdin);
	
	int size=strlen(email);
	
	if(email[size-1]=='\n'){
		email[size-1]='\0';
	}
	
	char*p=strchr(email,'@');
	
	if(p!=NULL){
		printf("Domain: %s",p+1);
	}else{
		printf("Invalid Email.");
	}
	
	return 0;
}
