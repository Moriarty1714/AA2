#pragma once
//Definició de tipus globals

enum class Cell { STONE = 'X', COINS = '*', NOTHING = ' ', PLAYER = '<' }; //ENUM CLASS DE LA POSSIBILIDAD DE CADA CASILLA DEL TABLERO
enum class Movement { UP, DOWN, LEFT, RIGHT, NOTHING }; //ENUM CLASS DEL MOVIMIENTO POSIBLE
enum class GameStates { INIT, PLAY, PAUSE, GAMEOVER }; //Enum Class de los diferentes tipos de estados
enum class InputKey { K_ESC, K_LEFT, K_RIGHT, K_UP, K_DOWN, COUNT}; //Enum class de las teclas presionadas