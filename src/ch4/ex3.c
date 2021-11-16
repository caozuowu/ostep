#include <stdio.h>
#include <unistd.h>

int main(int argc, char ** argv) {

    printf("main process hello\n");
    int rc = fork();
    if (rc < 0){
        /* code */
    }else if (rc > 0) {
        printf("sub process success\n");
        printf("good bye");
    }
    
    return 0;
}
