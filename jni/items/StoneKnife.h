#pragma once

#include "KnifeItem.h"

class StoneKnife : public KnifeItem
{
public:
	StoneKnife(short id);

	virtual int getAttackDamage();
};

