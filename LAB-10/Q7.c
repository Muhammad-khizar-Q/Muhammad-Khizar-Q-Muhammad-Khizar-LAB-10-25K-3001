#include <stdio.h>
#include <string.h>

int main(){
	
    char students[4][10]={"Alice", "Bob", "Charlie", "Diana"};
    char courses[4][5][20]={
        {"Math","Physics","Chemistry"},
        {"Biology","Physics","History","Art"},
        {"Math","English"},
        {"Physics","Math","Biology","Chemistry","Art"}
    };
    
    int num_courses[4] = {3, 4, 2, 5};
    int i, j;

    printf("Student Course Registrations:\n");
    for(i = 0; i < 4; i++) {
        printf("\n%s: ", students[i]);
        for(j = 0; j < num_courses[i]; j++) {
            printf("%s", courses[i][j]);
            if(j != num_courses[i]-1)
			printf(", ");
        }
        printf("\n");
    }
    printf("\n");
    char search_course[20];
    printf("Enter a course to find students: ");
    scanf("%s", search_course);

    printf("Students taking %s: ", search_course);
    int found = 0;
    for(i = 0; i < 4; i++) {
        for(j = 0; j < num_courses[i]; j++) {
            if(strcmp(courses[i][j], search_course) == 0) {
                printf("%s ", students[i]);
                found = 1;
                break;
            }
        }
    }
    if(!found) printf("None");
    printf("\n\n");
    
    printf("Overloaded Students (more than 3 courses):\n");
    for(i=0;i<4;i++){
        if(num_courses[i]>3) {
            printf("%s (%d courses)\n", students[i], num_courses[i]);
        }
    }

    return 0;
}
