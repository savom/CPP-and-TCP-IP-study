#include "Slime.h"

void Slime::Attack(Goblin* goblin)
{
	Bounce();
	
}

void Slime::Bounce()
{
	cout << name << "��(��) Ƣ��ö���." << endl;
}

Slime::Slime(int hp, int atk, int def)
	:Monster("������", hp, atk, def)
{
}
