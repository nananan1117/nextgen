#pragma once

#include "Money.h"

class Payment
{
private:
	Money amount;
public:
	Payment(Money cashTendered);
	Money getAmount();
};
