//
// Created by SUBRATA on 08/10/2024.
//
/*
 */
#include <stdio.h>

typedef enum {
    Red,
    Yellow,
    Green
} TrafficLight;

const char* getAction(TrafficLight light) {
    switch (light) {
        case Red: return "Stop";
        case Yellow: return "Caution";
        case Green: return "Go";
        default: return "Unknown action";
    }
}

int main() {
    TrafficLight light = Yellow;
    printf("The traffic light is %s\n", getAction(light));
    return 0;
}
