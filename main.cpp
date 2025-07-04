#include "Product.h"
#include "Cart.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
	Product p("a7a", 5.6, 4);
	cout<<p.getQuantity()<<'\n';
	cout<<p.getName()<<'\n';
	cout<<p.getPrice()<<'\n';
	cout<<p.decreseQuantity(5)<<'\n';
}