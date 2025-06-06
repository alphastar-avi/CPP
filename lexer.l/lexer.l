%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

%%

"print"            { printf("TOKEN_PRINT\n"); }
"int"              { printf("TOKEN_INT\n"); }
[0-9]+             { printf("TOKEN_NUMBER (%s)\n", yytext); }
[a-zA-Z_][a-zA-Z0-9_]* { printf("TOKEN_IDENTIFIER (%s)\n", yytext); }
\"(\\.|[^"])*\"    { printf("TOKEN_STRING (%s)\n", yytext); }
"+"                { printf("TOKEN_PLUS (%s)\n", yytext); }
"-"                { printf("TOKEN_MINUS (%s)\n", yytext); }
"*"                { printf("TOKEN_MULTIPLY (%s)\n", yytext); }
"/"                { printf("TOKEN_DIVIDE (%s)\n", yytext); }
"="                { printf("TOKEN_ASSIGN (%s)\n", yytext); }
";"                { printf("TOKEN_SEMICOLON (%s)\n", yytext); }
[ \t\n]+           ;  // Ignore whitespace
.                  { /* Ignore any other character */ }
./
%%

int yywrap(void) { return 1; }

int main(void) {
    yylex();
    return 0;
}
