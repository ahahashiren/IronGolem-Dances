/*
* This code is written by @ahahashiren.
* Email: ahahashiren@outlook.com
*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    while (1) {
        printf("\n\
        +------+\n\
        | #  # |\n\
        | ++++ |\n\
        +------+\n\
+------+........+------+\n\
|------|..+--+..|------|\n\
|------|..|--|..|------|\n\
+------+..+--+..+------+\n\
        ........\n\
        ..+--+..\n\
        ..|--|..\n\
        ..+--+..\n");
        usleep(800000);
#if _WIN32
        system("cls");
#else
        system("clear");
#endif
        
        printf("\n\
        +------+\n\
        | #  # |\n\
        | ++++ |\n\
        +------+\n\
........+------+........\n\
..+--+..|------|..+--+..\n\
..|--|..|------|..|--|..\n\
..+--+..+------+..+--+..\n\
        +------+\n\
        |------|\n\
        |------|\n\
        +------+\n");
        usleep(800000);
#if _WIN32
        system("cls");
#else
        system("clear");
#endif
    }
    
    return 0;
}
