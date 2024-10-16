//
// Created by SUBRATA on 08/10/2024.
//

#include <stdio.h>
typedef enum {
Winter,
Spring,
Summer,
Autumn
} Season;

void printSeason(Season s) {
switch (s) {
case Winter: printf("Winter\n");
    break;
case Spring: printf("Spring\n");
    break;
case Summer: printf("Summer\n");
    break;
case Autumn: printf("Autumn\n");
    break;
default: printf("Unknown season\n");
}
}

int main() {
Season currentSeason = Summer;
printSeason(currentSeason);
return 0;
}
