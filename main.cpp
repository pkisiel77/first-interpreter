
#include<iostream>
#include <sstream>
#include<string>

using namespace std;

int main()
{
	string tekst = "23+4+9/10*4-5";
	string hasz = "#";
	string szukajp = "+";
	string szukajm = "-";
	string szukajr = "*";
	string szukajd = "/";
	string copy, copynt, token;
	double maciej[6]{};
	int x, w;
	int y = 0;
	int z = 0;
	int pozycja;
	int a, b, c, d, e;

	copy = tekst;

	while (z == 0)
	{
		pozycja = tekst.find(szukajp);
		if (pozycja != string::npos)
		{
			cout << "Znaleziono tekst + na pozycji: " << pozycja << endl;
			y = 1;
		}
		if (y == 1)
		{
			tekst.replace(pozycja, 1, hasz);
			cout << tekst << endl;
		}
		y = 0;

		pozycja = tekst.find(szukajm);
		if (pozycja != string::npos)
		{
			cout << "Znaleziono tekst - na pozycji: " << pozycja << endl;
			y = 1;
		}
		if (y == 1)
		{
			tekst.replace(pozycja, 1, hasz);
			cout << tekst << endl;
		}
		y = 0;

		pozycja = tekst.find(szukajr);
		if (pozycja != string::npos)
		{
			cout << "Znaleziono tekst * na pozycji: " << pozycja << endl;
			y = 1;
		}
		if (y == 1)
		{
			tekst.replace(pozycja, 1, hasz);
			cout << tekst << endl;
		}
		y = 0;

		pozycja = tekst.find(szukajd);
		if (pozycja != string::npos)
		{
			cout << "Znaleziono tekst / na pozycji: " << pozycja << endl;
			y = 1;
		}
		if (y == 1)
		{
			tekst.replace(pozycja, 1, hasz);
			cout << tekst << endl;
		}
		y = 0;

		pozycja = tekst.find(szukajp);
		if (pozycja == string::npos)
		{
			pozycja = tekst.find(szukajm);
			if (pozycja == string::npos)
			{
				pozycja = tekst.find(szukajr);
				if (pozycja == string::npos)
				{
					pozycja = tekst.find(szukajd);
					if (pozycja == string::npos)
						z = 1;
				}
			}
		}
	}	
	x = stoi(tekst);

	copynt = tekst;

	size_t pos = 0;
	for (int i = 0; i < 6; i++)
	{
		if ((pos = tekst.find(hasz)) != std::string::npos)
		{
			token = tekst.substr(0, pos);
			stringstream geek(token);
			geek >> x;
			maciej[i] = x;
			tekst.erase(0, pos + hasz.length());
		}
	}
	token = tekst.substr(0, pos);
	stringstream geek(token);
	geek >> x;
	maciej[5] = x;

	for (int i = 0; i < 6; i++)
		cout << maciej[i] << endl;
	
	pozycja = tekst.find(pozycja);
	if ((pos = tekst.find(hasz)) != std::string::npos)
	{
		token = tekst.substr(0, pos);
		stringstream geek(token);
		geek >> x;
		a = x;
		tekst.erase(0, pos + hasz.length());
	}
	cout << a << endl;
  	for (int i = 0; i < 6; i++)
	{
		
	}

	return 0;
}
