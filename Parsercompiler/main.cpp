#include "Parser.h"


void main()
{
	Parser x;

	x.AddToken("add", 56);
	x.AddToken("sub", 57);
	x.AddToken("mult", 54);
	x.AddToken("divide", 55);

	x.PrintTokens();


	system("PAUSE");
}