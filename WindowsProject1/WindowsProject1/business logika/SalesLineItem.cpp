#include "SalesLineItem.h"
SalesLineItem::SalesLineItem(PrioductDescriptoin desc, int quantity) {
	this->quantity = quantity;
}
int SalesLineItem::getSubtotal() {
	return 0;
}