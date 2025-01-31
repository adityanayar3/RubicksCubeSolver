//
// Created by ADITYA on 01-02-2025.
//

#ifndef DFSSOLVER_H
#define DFSSOLVER_H
#include <bits/stdc++.h>
#include "RubiksCube.h"

template<typename T,typename H>;

class DFSSolver {
    private:
        int maxDepth;
        vector<RubiksCube :: MOVE> moves;

        bool dfsSolver(int maxDepth) {
            if (rubiksCube.isSolved()) {
                return true;
            }
            if (depth > maxDepth) { return false;}
            for (int i=0;i<n;i++) {
                rubiksCube.move(RubiksCube::MOVE(i));
                move.push_back(RubiksCube::MOVE(i));
                if (dfsSolver(maxDepth + 1)) { return true; }
                move.pop_back();
            }
            return false;
        }
    public:
        T rubiksCube;

        dfsSolver(T _rubiksCube,int _maxDepth = 8) {
            rubiksCube = _rubiksCube;
            maxDepth = _maxDepth;
        }
        vector<RubiksCube :: MOVE> solve() {
            dfs(1);
            return moves;
        }
};

#endif //DFSSOLVER_H
