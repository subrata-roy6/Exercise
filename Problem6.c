
//
// Created by SUBRATA on 08/10/2024.
//
/* 6. Struct and Pointers for 2D Coordinates
Define a typedef struct for a 2D coordinate (with x and y values).
Write a function that takes a pointer to this struct and calculates the distance between two coordinates.
*/
#include <stdio.h>
#include <math.h>
typedef struct {
    double x;
    double y;
} Coordinates2D;
double distance(Coordinates2D *point1 , Coordinates2D *point2) {
if( point1== NULL || point2 == NULL ) {
    printf(" Error the code");
    return 0;
}
    double dx = point1->x - point2->x;
    double dy = point1->y - point2->y;
    return sqrt( dx*dx + dy*dy );
}
int main() {
    Coordinates2D point1={3.5,8.5};
    Coordinates2D point2={5.5,2.5};

    double value = distance(&point1, &point2);
    printf("The distance between two point: %.2lf", value);
    return 0;

}