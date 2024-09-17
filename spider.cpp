#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <dos.h>

int main() {
    char a = 0x0000000D;
    int n = 1;
    int r;
    int switch_dir = 0;
    for (size_t i = 0; i < 1000000; i++)
    {
        if (switch_dir == 1) {
            printf("                                                                       \r");
        }
        for (size_t i = 0; i < n; i++)
        {
            printf(" ");
        }
        printf("m\r");
        //sleep();
        usleep(150000);
        if (switch_dir == 0) {
            n++;
        }
        else {
            n--;
        }
        if (n > 50) {
            switch_dir = 1;
            printf("                                                                       \r");
        }
        if (n < 0) {
            switch_dir = 0;
            n = 0;
        }
    }
}