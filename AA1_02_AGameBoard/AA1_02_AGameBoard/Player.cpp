#include <cstdio>
#include <cstdlib>
#include <iostream>

//Una función checkMovement que recibe dos parámetros : la posición del jugador en el tablero y el tipo de
//PlayerMovement que se desea hacer.Devuelve true si el movimiento es válido y false en caso contrario.
//Reflexione(antes de programar) que debe considerarse “movimiento válido”.

bool checkMovement(char position[5][5], char PlayerMovement)
{
    if ()
    {
        return true;
    }
    else
        return false;
}

//Una función addScore que actualiza el score del jugador del jugador sumando 1.
//Reflexione(antes de programar) si ésta función tiene que tener o no parámetros.

void addScore(Player& player)
{
    player.score++;
}



//Una función movePlayer que mueve al jugador a la siguiente casilla de dónde se encuentra dependiendo
//del tipo de PlayerMovement que se le pasa cómo parámetro.Reflexione(antes de programar) si la función también
//tiene que recibir cómo parámetro la posición dónde está el jugador o no.

void movePlayer(Player& Player)
{
    //DungeonCreator(position);

    char input;
    cout << "\nEscribe W, A, S o D para mover al jugador: " << std::endl;
    cin >> input;

    while (getchar() != '\n');
    PlayerAction(input,Player);
}

void PlayerAction(char input, Player& Player)
{
    if ((input == 'a' || input == 'A') && Player.posX > 0)
    {
        setPosition(charactersPosition, Player, 0, -1);
    }
    else if ((input == 'd' || input == 'D') && Player.posX < 4)
    {
        setPosition(charactersPosition, Player, 0, 1);
    }
    else if ((input == 'w' || input == 'W') && Player.posY > 0)
    {
        setPosition(charactersPosition, Player, -1, 0);
    }
    else if ((input == 's' || input == 'S') && Player.posY < 4)
    {
        existGem();
        setPosition(charactersPosition, Player, 1, 0);
    }
}

//Una función setPosition que actualiza la posición del jugador.Reflexione(antes de programar) qué
//parámetros debe tener esta función.

void setPosition(Player& player, int moveY, int moveX)
{
    position[Player.posY][Player.posX] = ' '; //La posicion actual de la entidad pasa a estar vacía
    player.posX += moveX; //Se cambia el valor de las posiciones
    player.posY += moveY;

    if (position[Player.posY][Player.posX] == 'M')
    {
        destroyBoard();
    }
    else if (position[Player.posY][Player.posX] == 'G')
    {
        existGem();
    }

    position[Player.posY][Player.posX] = Player.symbol; //Se pone la entidad en la nueva posición
}

//Una función existGem que devuelve true si hay una gema en la siguiente casilla a la que debería moverse el
//jugador según el tipo de PlayerMovement que se la pasa cómo parámetro y false en caso contrario.
//Reflexione(antes de programar) si la función también tiene que recibir cómo parámetro la posición dónde está el jugador o no.

void existGem()
{
    if (player.position[player.posX][player.posY] != LIBRE)
    {

    }
}