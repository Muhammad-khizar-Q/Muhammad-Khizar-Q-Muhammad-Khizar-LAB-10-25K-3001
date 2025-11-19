#include <stdio.h>
#include <string.h>

int main(){
    char names[100][100];
    int marks[100];
    int highest=0,sum=0,n,i;

    printf("Enter the number of students:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter name of student %d:",i+1);
        scanf(" %[^\n]",names[i]);
        printf("Enter marks of %s:",names[i]);
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }

    float average=sum/(float)n;

    printf("\nStudent Marks:\n");
    printf("Name                Marks\n");
    printf("-------------------------\n");

    for(i=0;i<n;i++){
        printf("%-20s %d\n",names[i],marks[i]);
        if(marks[i]>marks[highest]){
            highest=i;
        }
    }

    printf("\nHighest Scorer: %s with %d marks\n",names[highest],marks[highest]);
    printf("Average Marks: %.2f\n",average);

    return 0;
}

