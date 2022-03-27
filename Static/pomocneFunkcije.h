#pragma once
#include<iostream>
using namespace std;

char* AlocirajIKopiraj(const char* tekst){
	if (tekst == nullptr)
		return nullptr;
	int vel = strlen(tekst) + 1;
	char* temp = new char[vel];
	strcpy_s(temp, vel, tekst);
	return temp;
}
