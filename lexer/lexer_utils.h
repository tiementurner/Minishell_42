#ifndef LEXER_UTILS_H
# define LEXER_UTILS_H

# define CHAR_GENERAL 1
# define CHAR_SEMICOLON ';'
# define CHAR_WHITESPACE ' '
# define CHAR_TAB '\t'
# define CHAR_GREATER '>'
# define CHAR_LESSER '<'
# define CHAR_APPEND 94
# define CHAR_QUOTE '\''
# define CHAR_DOUBLE_QUOTE '\"'
# define CHAR_PIPE '|'
# define CHAR_ESCAPE '\\'
# define CHAR_NEWLINE '\n'
# define CHAR_NULL '\0'
# define TOKEN 1

enum
{
	GENERAL,
	IN_QUOTE,
	IN_DOUBLE_QUOTE,
};

#endif
