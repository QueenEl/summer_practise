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

	}
	int sum_round = round_opened + round_closed;
	int sum_figure = figure_opened + figure_closed;
	int sum_square = square_opened + square_closed;
	if (sum_round + sum_figure + sum_square>0)
	{
		result = 0;
		if (round_opened == round_closed || sum_round == 0)
			if (figure_opened == figure_closed || sum_figure == 0)
				if (square_opened == square_closed || sum_square == 0)
					result = 1;
	}
	char *reverse(char *string)
	{
		char * s = (char*)malloc(strlen(string) + 1);
		for (int i = 0; i<strlen(string) + 1; i++)
			s[i] = 0;
		int k = 0;
		for (int i = strlen(string) - 1; i>-1; i--)
		{
			s[k] = string[i];
			k++;
		}
		return (char *)s;
	}