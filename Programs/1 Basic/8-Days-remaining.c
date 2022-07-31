#include "basic.h" 

int main(void) {
    clear_screen();
    time_t curr_time;
    time(&curr_time);
    printf("The current time is %s\n", ctime(&curr_time));
    // https://cplusplus.com/forum/beginner/216156/
    return 0;
}