#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void init(){
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

#define VALUE 32

int main(){
    init();
    char buf[0x30];
    int num = 10;
    int i = 0;
    int result = 0;

    scanf("%s", buf);

    for(i; i < VALUE; i++){
        result += 1;
    }

    result += num;

    if(result != 33){
        puts("you're out!");
        exit(1);
    }

    printf("%d\n", result);

    printf("perfect!\n");
    system("/bin/sh");
    return 0;
}