#include <stdio.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

// A 
const char* get_status_message(Status status) {
    switch (status) {
        case SUCCESS:
            return "Operation successful.";
        case FAILURE:
            return "Operation failed.";
        case TIMEOUT:
            return "Operation timed out.";
        default:
            return "Unknown status.";
    }
}

int main() {
   
    Status current_status = SUCCESS;

    printf("Current status is: %s\n", get_status_message(current_status));


    current_status = TIMEOUT;
    printf("New status is: %s\n", get_status_message(current_status));

    return 0;
}