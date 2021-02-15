#include "initialize.h"

void	initialize_lexer(t_lexer *lexer)
{
	lexer->token_list = NULL;
	lexer->char_type = 0;
	lexer->state = 0;
	lexer->line_length = 0;
	lexer->error = 0;
}
