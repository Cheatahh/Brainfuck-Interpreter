/*
 * Verbose version including, comments, #include, some type specifications and whitespaces
 *
 * For the minimized versions (-> 179 Bytes), see main.c
 * */

#include "stdio.h"

char data[999],             /*
                             * "infinite" data array, as defined by the brainfuck language specification.
                             * 999 Registers should be enough for most programs.*/
     *pointer=data,         // current caret into the data array
     character,             // character storage
     a,                     // storage variable
     **instructions;        // used for casts

int *nests;                 // current nesting level, used to jump over loop instructions

int main(int jumpOffset, char** input) {
    for(instructions = input;               // cast
        character = *instructions[1]++;)    // advance until null character is reached
        a = character % 7,
        nests ?                             // nest mode, skip to matching ] instruction
            character & 64 ?
                nests += 1 - a              // [ -> increase nesting level, ] -> decrease nesting level
            :
                0                           // nop
        :
            character - 93 ?
                a ?
                    character & 1 ?                                 // + - instructions
                        *pointer += 2 - a                           // increment / decrement the data at the data pointer
                    :
                        character & 16 ?                            // > < instructions
                            pointer += a - 5                        // increment / decrement the data pointer
                        :
                            a - 4?                                  // , instruction
                                *pointer = getchar()                // accept one byte of input, storing its value in the byte at the data pointer
                            :                                       // . instruction
                                putchar(*pointer)          // output the byte at the data pointer
                :
                    *pointer ?                                      // [ instruction
                        main(instructions[1], input)      // enter loop, start subroutine
                    :
                        nests++                                     // skipping loop, entering nest mode
            :
                *pointer ?                                          // ] instruction
                    instructions[1] = jumpOffset                    // jump back to the beginning of the subroutine
                :
                    0;                                              // nop

    instructions[1]--;
}