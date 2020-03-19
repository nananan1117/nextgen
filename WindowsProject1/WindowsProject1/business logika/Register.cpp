#include "Register.h"


Register::Register(ProductCatalog catalog)
{
	this.catalog = catalog;
}
void Register::endSale()
{
	currentSale.becomeComplete();
}
void Register::enterItem(ItemID id, int quantity)
{
	ProductDescription desc = catalog.getProductDescription(id);
	currentSale.makeLineItem(desc, quantity);
}
void Register::makePayment(Money cashTendered)
{
	currentSale.makePayment(cashTendered);
}