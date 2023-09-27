
include <stdio.h>
#include <string.h>

int main() {
    char input[] = "PyThOn";
    char output[7]; 

    output[0] = input[1];
    output[1] = input[3];
    output[2] = input[4];
    output[3] = input[2];
    output[4] = input[5];
    output[5] = input[0];

    printf("Output: %s", output);

    return 0;
}

//the code is in c