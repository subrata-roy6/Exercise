//
// Created by SUBRATA on 08/10/2024.
//
/* 5. Enum for Days of the Week with Pointer to Enum
Define an enum for the days of the week.
Write a function that takes a pointer to this enum
and prints the corresponding day of the week.
*/
#include <stdio.h>
typedef enum {
    Sunday,Monday,tuesday, Wednesday, Thursday, Friday, Saturday
}weekofday;
void printday(weekofday *day) {
    if (day == NULL) {
        printf("Error \n");
    }
    switch (*day) {
        case Sunday:
            printf("Sunday");
        break;
        case Monday:
            printf("Monday");
        break;
        case tuesday:
            printf("tuesday");
        break;
        case Wednesday:
            printf("Wednesday");
        break;
        case Thursday:
            printf("Thursday");
        break;
        case Friday:
            printf("Friday");
        break;
        case Saturday:
            printf("Saturday");
        break;
    }
}
int main() {
    weekofday today= Sunday;
    printday(&today);
    printf("\n");
    weekofday today1= Monday;
    printday(&today1);
    printf("\n");
    weekofday today3= tuesday;
    int diff=today1-today3;
    printf("diff = %d\n", diff);
    return 0;
}