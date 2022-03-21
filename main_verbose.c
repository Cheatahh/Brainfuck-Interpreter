/*
 * Verbose register version including, comments, #include, some type specifications and whitespaces
 *
 * For the minimized versions, see main.c
 * */

#include "stdio.h"
#define CHAR_REGISTER 0

#if CHAR_REGISTER
    char
#else
    int
#endif
         data[999],         /*
                             * "infinite" data array, as defined by the brainfuck language specification.
                             * 999 Registers should be enough for most programs.
                             * The 'char' datatype is required for programs depending on the overflow of 1-byte registers. */
         *pointer=data,     // current caret into the data array
         character=1        // character & status storage
         #if CHAR_REGISTER
              ,*cast        // casting, required for 8-bit register mode
         #endif
        ;
int offset,                 // current offset into the instructions array
    nests,                  // current nesting level, used to jump over loop instructions
    *b,                     // storage variable, used for casts and to reduce code size
    a;                      // storage variable, used for casts and to reduce code size

int main(int jumpOffset, char **instructions){
    while(character &&
          #if CHAR_REGISTER
               (character = (cast = 1[b = instructions])[offset++])
          #else
               (character = ((char*)1[b = instructions])[offset++])
          #endif
    ) {
        a = character & 2;
        b = character & 1;
        nests ?                                     // nest mode, skip to matching ] instruction
            nests -= character & 64 ? 1 - a : 0
        :                                           // interpret mode
            character & 16 ?
                !b ?                                // > < instructions
                    pointer -= 1 - a                // increment / decrement the data pointer
                :
                    a ?
                        *pointer ?                  // [ instruction
                            character = main(offset, instructions) | 1 // enter loop, start subroutine
                        :
                            nests++                 // skipping loop, entering nest mode
                    :
                        *pointer ?                  // ] instruction
                            offset = jumpOffset     // jump back to the beginning of the subroutine
                        :
                            (character=0)           // break out of loop, end subroutine
            :
                b ?                                 // + - instructions
                    *pointer -= 1 - a               // increment / decrement the data at the data pointer
                :
                    !a ?                            // . instruction
                        *pointer=getchar()          // output the byte at the data pointer
                    :                               // , instructions
                        putchar(*pointer); // accept one byte of input, storing its value in the byte at the data pointer
    }
}