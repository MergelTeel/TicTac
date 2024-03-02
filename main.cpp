#include <iostream>
bool chekVictoryX(char table[3][3]) {
    bool vicrotyX;
    int i = 0;
    while (i != 2) {
        for (int j = 0; j < 3; ++j) {
            if (table[i][j] == 'X') {
                vicrotyX = true;
            } else { vicrotyX = false; }
        }
        i++;
    }
    int j = 0;
    while (j != 2) {
        for (i = 0; i < 3; ++i) {
            if (table[i][j] == 'X') {
                vicrotyX = true;
            } else { vicrotyX = false; }
        }
        j++;
    }
    return (vicrotyX);
}
    bool chekVictoryO(char table[3][3]){
        bool vicrotyO;
        int i=0;
        while (i!=2){
            for(int j=0; j<3; ++j){
                if(table[i][j]=='O'){
                    vicrotyO = true;
                } else { vicrotyO = false;}
            }
            i++;
        }
        int j = 0;
        while (j!=2) {
            for (i = 0; i < 3; ++i) {
                if (table[i][j] == 'O') {
                    vicrotyO = true;
                } else { vicrotyO = false; }
            }
            j++;
        }
        return(vicrotyO);

}
int main() {
    int motion = 1;

    char playTable[3][3];
    for (int i = 0; i < 3; i++) {
        std::cout << std::endl;
        for (int j = 0; j < 3; j++) {
            playTable[i][j] = '~';
            std::cout << playTable[i][j];
        }
    }
    std::cout << std::endl;
    do {
        int x;
        int y;


        std::cout << "Turn X player, enter position" << std::endl;
        std::cin >> x >> y;
        playTable[x][y] = 'X';
        for (int i = 0; i < 3; i++) {
            std::cout << std::endl;
            for (int j = 0; j < 3; j++) {
                std::cout << playTable[i][j];
            }
        }
         if(chekVictoryX(playTable) == true){
             std::cout <<"Player X WIN!";
             break;
         }
        motion++;
        std::cout << "Turn O player, enter position" << std::endl;
        std::cin >> x >> y;
        playTable[x][y] = 'O';
        for (int i = 0; i < 3; i++) {
            std::cout << std::endl;
            for (int j = 0; j < 3; j++) {
                std::cout << playTable[i][j];
            }
        }
        if(chekVictoryO(playTable)==true){
            std::cout<< "Player O WIN!";
            break;
        }
        motion++;
    } while (motion != 9);
    if(motion == 9){
       std::cout << "No victor"<< std::endl;
    }
    return 0;
}
