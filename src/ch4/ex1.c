//
//  ex1.c
//  ostep
//
//  Created by 曹作武 on 2021/11/16.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char ** argv) {

    int n = 100;
    int rc = fork();
    printf("begin n = %d\n", n);
    if (rc < 0) {
        printf("fork fail \n");
        exit(1);
    }else if (rc == 0) {
        printf("fork success \n");
        n = 99;
        printf("n = %d\n", n);
        
    }else {
        int wc = wait(NULL);
    }
    n = 9;
    printf("main proses end n = %d\n", n);
    
    return 0;
}
