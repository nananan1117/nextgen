#include "Sale.h"

Money Sale::getBalance()
{
	payment.getAmount().minus(getTotal());
}
void Sale::becomeComplete()
{
	isComplete = true;
}
boolean Sale::isComplete()
{
	return isComplete;
}
void Sale::makeLineItem(ProductDescription desc, int quantity)
{
	lineItems.add(new SaleLineItem(desc, quantity));
}
Money Sale::getTotal()
{
	Money total = new Money();
	Money subtotal = null;
	for (SalesLineItem lineItem : lineItems)
	{
		subtotal = lineItem.getSubtotal();
		total.add(subtotal);
	}
	return total;
}
void Sale::makePayment(Money cashTendered)
{
	payment = new Payment(cashTendered);
}