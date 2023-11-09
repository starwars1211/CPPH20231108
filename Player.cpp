#include "Player.h"
#include <iostream>

FPlayer::FPlayer()
{
	HP = 100;
	MP = 50;
}

FPlayer::~FPlayer()
{
	std::cout << "Player Destructed." << std::endl;
}


void FPlayer::Attack()
{

}

void FPlayer::Move()
{

}