#pragma once
#include <iostream>
using namespace std;

class Osoba {
private:
	char* _imePrezime;
public:
	static int brojOsoba;
	static Osoba* _listaOsoba;
	static void AddToList(const Osoba& obj) {
		int duzinaNiza = brojOsoba + 1;
		if (_listaOsoba == nullptr)
		{
			_listaOsoba = new Osoba[brojOsoba + 1];
			_listaOsoba[brojOsoba] = obj;
			brojOsoba++;
		}
		else if (duzinaNiza == brojOsoba)
		{
			int vel = brojOsoba + 1;
			Osoba* temp = new Osoba[vel];
			for (int i = 0; i < brojOsoba; i++)
			{
				temp[i] = _listaOsoba[i];
			}
			temp[brojOsoba - 1] = obj;
			brojOsoba++;
			_listaOsoba = temp;
			delete temp;
			temp = nullptr;
		}
		else
			_listaOsoba[brojOsoba++] = obj;
	}
	static void PrintList() {
		for (int j = 0; j < brojOsoba; j++)
		{			
			_listaOsoba[j].Ispis();
		}

	}
	void Ispis() {
		cout << "Ime i Prezime: " << _imePrezime << endl;
	}
	Osoba()
	{
		_imePrezime = nullptr;
		
	}
	Osoba(const char* imePrezime)
	{
		_imePrezime = AlocirajIKopiraj(imePrezime);
		AddToList(*this);
	}
	~Osoba()
	{
		delete[] _imePrezime; _imePrezime = nullptr;

	}
};