#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include "game.h"

int test(char * filepath){
    Board *b = makeBoard(filepath);
    char * moves;
    printBoard(b);
    printf("number of black moves: %d\n", numberOfMoves(b, 'B'));
    printf("number of white moves: %d\n", numberOfMoves(b, 'W'));
    moves = validMoves(b, 'B');
    printf("Black moves: %s\n", moves);
    free(moves);
    makeMove("D5", b);

    printBoard(b);
    printf("number of black moves: %d\n", numberOfMoves(b, 'B'));
    printf("number of white moves: %d\n", numberOfMoves(b, 'W'));
    moves = validMoves(b, 'W');
    printf("White moves: %s\n", moves);   
    free(moves);    
    makeMove("D4", b);

    printBoard(b);
    printf("number of black moves: %d\n", numberOfMoves(b, 'B'));
    printf("number of white moves: %d\n", numberOfMoves(b, 'W'));
    moves = validMoves(b, 'B');
    printf("Black moves: %s\n", moves);
    free(moves);
    makeMove("F5-D5", b);

    printBoard(b);
    printf("number of black moves: %d\n", numberOfMoves(b, 'B'));
    printf("number of white moves: %d\n", numberOfMoves(b, 'W'));
    moves = validMoves(b, 'W');
    printf("White moves: %s\n", moves);
    free(moves);
    makeMove("B4-D4", b);

    printBoard(b);
    printf("number of black moves: %d\n", numberOfMoves(b, 'B'));
    printf("number of white moves: %d\n", numberOfMoves(b, 'W'));
    moves = validMoves(b, 'B');
    printf("Black moves: %s\n", moves);
    free(moves);
    makeMove("F7-F5", b);

    printBoard(b);
    printf("number of black moves: %d\n", numberOfMoves(b, 'B'));
    printf("number of white moves: %d\n", numberOfMoves(b, 'W'));
    moves = validMoves(b, 'W');
    printf("White moves: %s\n", moves);
    free(moves);
    makeMove("B2-B4", b);

    printBoard(b);
    printf("number of black moves: %d\n", numberOfMoves(b, 'B'));
    printf("number of white moves: %d\n", numberOfMoves(b, 'W'));
    moves = validMoves(b, 'B');
    printf("Black moves: %s\n", moves);
    free(moves);

    free(b);

    return 0;
}

int main(int argc, char *argv[]){
    if (argc != 3)
        return 0;
    else    
        test(argv[1]);
    return 0;
}
