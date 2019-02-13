/* C Declarations */

%{
	#include<stdio.h>
	#include "1507031.tab.h"
	#include<stdlib.h>
%}

IDENTIFIER [a-zA-Z_][a-zA-Z0-9]*
DIGIT [0-9]

/* RE and Actions */

%%


"if"	{ return IF;}
"else"	{ return ELSE;}
"semicolon"		{return SM;}
"comma"			{return CM;}
"parenthesesS"	{return PS;}
"parenthesesE"	{return PE;}
"braceS"		{return BS;}
"braceE"		{return BE;}
"plus"				{return PL;}
"minus"				{return MN;}
"mult"				{return ML;}
"div"				{return DV;}
"mod"				{return MOD;}
"pow"				{return POWER;}
"fact"				{return FACTORIAL;}
"less"				{return LS;}
"greater"			{return GT;}
"equal"				{return EQ;}
"assign"			{return AS;}
"switch"		{return SWITCH;}
"case"			{return CASE;}
"default"		{return DEFAULT;}
"inc"			{return INC;}
"dec"			{return DEC;}
"for"			{return FOR;}
"int"			{return INT;}
"double"		{return DOUBLE;}
"fun"{IDENTIFIER} 		{yylval.STR = strdup(yytext);return FUNCTION;}

"-"?{DIGIT}+ {
yylval.DOB=atof(yytext);
	return NUM;
}

"-"?{DIGIT}+?"."{DIGIT}+ {
yylval.DOB=atof(yytext);
	return NUM;
}


{IDENTIFIER} {
			yylval.STR = strdup(yytext);
 			return VAR;
}

[ \t\n]*	;

.	{
		yyerror("Unknown Character.\n");
	}
%%

//hafiz031
