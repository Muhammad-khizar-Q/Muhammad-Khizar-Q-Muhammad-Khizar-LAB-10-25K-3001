#include <stdio.h>
#include <string.h>

int main(){
	
	int marks[100];
	char names[100][100];
	int i,highest=0,sum=0;
	
	for(i=0;i<5;i++){
		printf("Enter name of student %d:",i+1);
        scanf(" %[^\n]",names[i]);
        printf("Enter marks of %s:",names[i]);
        scanf("%d",&marks[i]);
        sum+=marks[i];
	}
	float average=sum/5.00;

    printf("\nStudent Marks:\n");
    printf("Name                Marks\n");
    printf("-------------------------\n");

    for(i=0;i<5;i++){
        printf("%-20s| %d\n",names[i],marks[i]);
        printf("-------------------------\n");
        if(marks[i]>marks[highest]){
            highest=i;
        }
    }

    printf("\nHighest Scorer: %s with %d marks\n",names[highest],marks[highest]);
    printf("Class Average: %.2f\n",average);
	
	return 0;
}
