//
// Created by ADITYA on 26-01-2025.
//


#include "RubiksCube.h"


class RubiksCube3dArray : public RubiksCube {
    private:
        void rotateFace(int ind) {
            char temp[3][3] ={};
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    temp[i][j] = cube[ind][i][j];
                }
            }
            // rotate the face toward the right
            for (int i = 0; i < 3; i++) cube[ind][0][i] = temp[2-i][0];
            for (int i = 0; i < 3; i++) cube[ind][i][2] = temp[0][i];
            for (int i = 0; i < 3; i++) cube[ind][2][2 - i] = temp[i][2];
            for (int i = 0; i < 3; i++) cube[ind][2 - i][0] = temp[2][2 - i];
        }
    public:
        char cube[6][3][3]{};

        RubiksCube3dArray() {
            for (int i = 0; i < 6; i++) {
                for (int j = 0; j < 3; j++) {
                    for (int k = 0; k < 3; k++) {
                        cube[i][j][k] = getColorLetter(COLOR(i));
                    }
                }
            }

            COLOR getColor(FACE face,unsigned row,unsigned col) const override {
                char color = cube[int(face)][row][col];
            }
        };
        bool isSolved() const override{
            return true;
        }
};
