#include "Customer.h"
#include "Cart.h"
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>


using namespace std;

Customer::Customer(string name, double balance) : name(name), balance(balance) {}

double Customer::getBalance() { return balance; }

void Customer::checkout(Cart* cart) {
	if (cart->isEmpty()) {
		cout<<"!!!!!!!!Your cart is empty!!!!!!!!\n";
		return;
	}
	
	cart->getShippedItems();
	cout<<"** Checkout receipt **\n";
	cart->getItems();
	cout<<"Subtotal:        "<<cart->getSubtotal()<<'\n';
	cout<<"Shipping:        "<<cart->getSubtotal()/10<<'\n';
	cout<<"Amount:          "<<cart->getSubtotal()+cart->getSubtotal()/10<<"\n\n";
	
	cout<<"Your balance is "<<balance;
	if (balance < cart->getSubtotal()+cart->getSubtotal()/10) {
		cout<<" !!! is less than Amount you can't complete checkout";
	}
}