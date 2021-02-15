#include "lexer.h"

int		get_char_type(char c)
{
	if (c == ';')
		return (CHAR_SEMICOLON);
	if (c == ' ' || c == '	')
		return (CHAR_WHITESPACE);
	if (c == '>')
		return (CHAR_GREATER);
	if (c == '<')
		return (CHAR_LESSER);
	if (c == '\'')
		return (CHAR_QUOTE);
	if (c == '\"')
		return (CHAR_DOUBLE_QUOTE);
	if (c == '|')
		return (CHAR_PIPE);
	if (c == '\n')
		return (CHAR_NEWLINE);
	return (CHAR_GENERAL);
}
