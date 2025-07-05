#include "Cart.h"
#include "Product.h"
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>


using namespace std;

void Cart::add(Product* product, int quantity) {
	for (int i=0; i<items.size(); i++) {
		if (items[i].first->getName() == product->getName()) {
			items[i].second+=quantity;
			return;
		}
	}
	items.push_back({product, quantity});
}

double Cart::getSubtotal() {
	double sum=0.0;
	for (auto item:items) {
		sum+=1.0*item.second*item.first->getPrice();
	}
	return sum;
}

void Cart::getItems() {
	for (auto item:items) {
		cout<<item.second<<"x "<<item.first->getName()<<string(13-item.first->getName().size(), ' ')<<item.first->getPrice()<<'\n';
	}
	cout<<"-----------------------\n";
}

void Cart::getShippedItems() {
	cout << "** Shipment notice **\n";
	double total=0.0;
	for (auto item:items) {
		if (item.first->isShippable()) {
			cout<<item.second<<"x "<<item.first->getName()<<string(13-item.first->getName().size(), ' ')<<item.first->getWeight()*item.second<<"g\n";
			total+=1.0*item.second*item.first->getWeight();
		}
	}
	if (!total) {
		cout<<"No shipped Items\n";
		return;
	}
	cout<<"Total package weight "<<total/1000.0<<"kg\n\n";
}

bool Cart::isEmpty() { return items.size() < 1; }