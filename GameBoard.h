//
// Created by Owner on 7/2/2025.
//

#ifndef FINALFANTACYTACTICSADVANCE_GAMEBOARD_H
#define FINALFANTACYTACTICSADVANCE_GAMEBOARD_H



class GameBoard {
    int length;
    int width;

    GameBoard(int length, int width);
};


namespace CommandLine {

    void generateGameBoard(int length, int width);


} // CommandLine

#endif //FINALFANTACYTACTICSADVANCE_GAMEBOARD_H
