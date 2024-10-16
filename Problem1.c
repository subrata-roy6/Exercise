//
//
//
/*1. Pointer to Struct: Modify Structure Data
Define a typedef struct for a Person with fields like name, age, and height.
Write a function that takes a pointer to this struct and modifies
the fields of the struct.*/
#include <stdio.h>
#include <string.h>
typedef struct {
    char name[15];
    int age;
    float height;
}person;
void modifypeople(person *p ,char new_name[15], int newage, float newheight)
{
    if(p==NULL) {
        printf("Something is error\n");
        return;
    };
    strcpy(p->name,new_name sizeof(p->name)-1);
    p->name[sizeof(name)-1]='\0';
    p->age=newage;
    p->height=newheight;

    printf("Updated Person details:\n");
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Height: %.2f meters\n", p->height);
}
int main() {
    person people={"Subrata",25,5.6};
    printf("Person details:\n");
    printf("Name: %s\n", people.name);
    printf("Age: %d\n", people.age);
    printf("Height: %.2f meters\n", people.height);

    modifypeople(&people,"Roy",22,5.0);

}
