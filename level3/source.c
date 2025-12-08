/*
Complete Flow Summary

Print "Please enter key: "
Read input string
Validate:

scanf read exactly 1 item
input[0] == '4'
input[1] == '2'


Initialize: buffer1 starts with '*', index2=2, index1=1
Loop while buffer1.length < 8 and index2 < input.length:

Extract 3 chars from input[index2:index2+3]
Convert to decimal number
Store as ASCII character in buffer1[index1]
Increment both indices


Null-terminate buffer1
Compare buffer1 with secret string at "********"
If equal: Call success function
Otherwise: Crash

*/
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>

void ___syscall_malloc(void) {
    printf("Nope.\n");
    exit(1);
}

void ____syscall_malloc(void) {
    printf("Great job!\n");
    exit(0);
}


int main(){
    int scanf_ret, index1, index2;
    char input[97];
    char buffer1[9];
    char buffer2[4];

    printf("Please enter key: ");
    scanf_ret = scanf("%96s", &input);

    if (scanf_ret != 1)
        ___syscall_malloc();

    if (input[0] != '4')
         ___syscall_malloc();
    
    if (input[1] != '2')
         ___syscall_malloc();

    fflush(0);

    memset(buffer1, 0, 9);
    buffer1[0] = '*';
    buffer2[3] = '\0';
    index1 = 1;
    index2 = 2;

    while(strlen(buffer1) < 8 && index2 < strlen(input)){
        buffer2[0] = input[index2];
        buffer2[1] = input[index2 + 1];
        buffer2[2] = input[index2 + 2]; 

        buffer1[index1] = atoi(buffer2);
        
        index2  += 3;
        index1++;
    }

    buffer1[index1] = '\0';

    if (!strcmp(buffer1, "********"))
    {
        ____syscall_malloc();
    }
    else {
        ___syscall_malloc();
    };

    return (0);
}