#include <iostream>
#include <vector>

#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"

using namespace std;

int main()
{
	
	srand((unsigned int)(time(nullptr)));
	vector<FGoblin*> GoblinList;
	for (int i = 0; i < (rand() % 5) + 1; ++i)
	{
		GoblinList.push_back(new FGoblin);
	}

	for (int i = 0; i < GoblinList.size(); ++i)
	{
		cout << GoblinList[i]->HP << endl;
	}

	for (int i = 0; i < GoblinList.size(); ++i)
	{
		delete GoblinList[i];
	}

	GoblinList.clear();
	
	return 0;

}