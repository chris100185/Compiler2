#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Token
{	 
	string token;
	int id;
	int lineNumber;
};

class Parser
{
public:
	vector<Token> tokens;
	int lineNumber = 1;
	int tokenCount = 0;
		
	void Parse()
		{

		}
	//Adds a new token to the array
	void AddToken(string token, int id)
		{
			tokens.emplace_back(Token());		
			tokens[tokenCount].id = id;
			tokens[tokenCount].token = token;
			tokens[tokenCount].lineNumber = lineNumber;
			tokenCount++;
		}

	//prints out a list of all the tokens and info associated with them.
	void PrintTokens()
	{
		for (int i = 0; i < tokenCount; i++)
		{
			cout << "(Tok: ";// +;
			cout << tokens[i].id;
			cout << string(" line: ") + to_string(tokens[i].lineNumber) + " str= " + tokens[i].token << endl;
		}
	}

	
};