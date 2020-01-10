
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     UINT8 = 258,
     BOOLEAN = 259,
     SHORT = 260,
     INTEGER = 261,
     DOUBLE = 262,
     IDENTIFIER = 263,
     STRING = 264,
     UNICODE = 265,
     MVSTRING = 266,
     SYSTIME = 267,
     VAR = 268,
     kw_TYPE = 269,
     kw_FOLDER = 270,
     kw_OLEGUID = 271,
     kw_SET = 272,
     kw_PROPERTY = 273,
     kw_NPROPERTY = 274,
     kw_RECIPIENT = 275,
     kw_TO = 276,
     kw_CC = 277,
     kw_BCC = 278,
     kw_OOM = 279,
     kw_MNID_ID = 280,
     kw_MNID_STRING = 281,
     kw_PT_BOOLEAN = 282,
     kw_PT_STRING8 = 283,
     kw_PT_UNICODE = 284,
     kw_PT_SHORT = 285,
     kw_PT_LONG = 286,
     kw_PT_SYSTIME = 287,
     kw_PT_MV_STRING8 = 288,
     kw_PT_BINARY = 289,
     OBRACE = 290,
     EBRACE = 291,
     COMMA = 292,
     SEMICOLON = 293,
     COLON = 294,
     LOWER = 295,
     GREATER = 296,
     EQUAL = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 38 "libocpf/ocpf.y"

	uint8_t				i;
	uint8_t				b;
	uint16_t			s;
	uint32_t			l;
	uint64_t			d;
	char				*name;
	char				*nameW;
	char				*date;
	char				*var;
	struct StringArray_r		MVszA;



/* Line 1676 of yacc.c  */
#line 109 "libocpf/ocpf.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE ocpf_yylval;


