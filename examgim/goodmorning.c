#include <stdio.h>

int main() {
    int hour, day;
    char name[3];  

    printf("Enter time and AM,PM: ");
    scanf("%d %s", &hour, &day, name);
 
    if (hour==day ) {
        printf("Good Morning, Buddy!\n");
    }

    else if (hour==day ) {
        printf("Good Afternoon, Buddy!\n");
    }
    
    else if (hour==day ) {
        printf("Good Evening, Buddy!\n");
    }
  
    else {
        printf("Good Night, Buddy!\n");
    }

  
}

