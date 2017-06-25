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
