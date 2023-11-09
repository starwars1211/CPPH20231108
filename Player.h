#pragma once
#ifndef __PLAYER_H__  
#define __PLAYER_H__  

class FPlayer
{
public:
	
	FPlayer();
	~FPlayer();

	int HP;
	int MP;

	void Attack();
	void Move();
};

#endif
