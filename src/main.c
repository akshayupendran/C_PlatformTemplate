#include <stdio.h>
#include "StdTypes.h"

int main(int argc, char** argv)
{
    print_input_parameters(argc, argv);
    return 0;
}

void print_input_parameters(int argc, const char const **argv)
{
    uint8 LoopCounter_ui08;
    printf("Input Parameters are:\n");
    for(LoopCounter_ui08=0; LoopCounter_ui08<argc; LoopCounter_ui08++)
    {
        printf("%s\n", argv[LoopCounter_ui08]);
    }
}
