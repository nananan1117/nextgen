#include "Payment.h"

Payment::Payment(Money cashTendered)
{
	amount = cashTendered;
}
Money Payment::getAmount()
{
	return amount;
}