#include <stdio.h>
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {

    enum TrafficLight currentLight = RED; 

    
    switch (currentLight) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light state\n");
            break;
    }


    currentLight = GREEN;
    switch (currentLight) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light state\n");
            break;
    }

    return 0;
}