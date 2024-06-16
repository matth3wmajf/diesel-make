#pragma once

/*
 *	This type defines an enum, that lists the different types of possible
 *	tokens.
 *	See `documentation/TOKENS.md` for more information.
 */
typedef enum
{
	TT_TARGET,
	TT_UNKNOWN,
	TT_KEYWORD,
	TT_COMMENT,
	TT_COMMAND,
	TT_VARIABLE,
	TT_OPERATOR,
	TT_DEPENDENCY,
	TT_PLACEHOLDER
} token_type_t;

typedef struct
{
	token_type_t token_type;
} token_t;