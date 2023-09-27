#include <stdio.h>
void main() {
    int seconds, hours, minutes, remainingSeconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    remainingSeconds = seconds % 3600;
    minutes = remainingSeconds / 60; 
    remainingSeconds = remainingSeconds % 60;
    printf("The time in HH:MM:SS format is: %02d:%02d:%02d\n", hours, minutes, remainingSeconds);
}   