#include <cstdio>
#include <cstdlib>
#include <iostream>

//Una funci�n checkMovement que recibe dos par�metros : la posici�n del jugador en el tablero y el tipo de
//PlayerMovement que se desea hacer.Devuelve true si el movimiento es v�lido y false en caso contrario.
//Reflexione(antes de programar) que debe considerarse �movimiento v�lido�.

bool checkMovement(char position[5][5], char PlayerMovement)
{
    if ()
    {
        return true;
    }
    else
        return false;
}

//Una funci�n addScore que actualiza el score del jugador del jugador sumando 1.
//Reflexione(antes de programar) si �sta funci�n tiene que tener o no par�metros.

void addScore(Player& player)
{
    player.score++;
}



//Una funci�n movePlayer que mueve al jugador a la siguiente casilla de d�nde se encuentra dependiendo
//del tipo de PlayerMovement que se le pasa c�mo par�metro.Reflexione(antes de programar) si la funci�n tambi�n
//tiene que recibir c�mo par�metro la posici�n d�nde est� el jugador o no.

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

//Una funci�n setPosition que actualiza la posici�n del jugador.Reflexione(antes de programar) qu�
//par�metros debe tener esta funci�n.

void setPosition(Player& player, int moveY, int moveX)
{
    position[Player.posY][Player.posX] = ' '; //La posicion actual de la entidad pasa a estar vac�a
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

    position[Player.posY][Player.posX] = Player.symbol; //Se pone la entidad en la nueva posici�n
}

//Una funci�n existGem que devuelve true si hay una gema en la siguiente casilla a la que deber�a moverse el
//jugador seg�n el tipo de PlayerMovement que se la pasa c�mo par�metro y false en caso contrario.
//Reflexione(antes de programar) si la funci�n tambi�n tiene que recibir c�mo par�metro la posici�n d�nde est� el jugador o no.

void existGem()
{
    if (player.position[player.posX][player.posY] != LIBRE)
    {

    }
}