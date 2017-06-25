//#include <stdio.h>
#include <conio.h>
//#include <stdlib.h>
#include <string>
#include <windows.h>

int brackets(char *string)
{
	int result = -1;
	int round_opened = 0; int round_closed = 0;
	int figure_opened = 0; int figure_closed = 0;
	int square_opened = 0; int square_closed = 0;
	for (int i = 0; i<strlen(string); i++)
	{
		switch (string[i])
		{
		case '(': round_opened++; break;
		case ')': round_closed++; break;
		case '{': figure_opened++; break;
		case '}': figure_closed++; break;
		case '[': square_opened++; break;
		case ']': square_closed++; break;
		}
