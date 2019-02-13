/* C Declarations */

%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	char varName[100][100];
	double varValue[100];
	int varType[100];
	int indexOfVar=0;
	int caseNo;
	int isDefault=1;
	int isCurrentVarInt=0;
	int findIndex(char* str);//to prevent implicit declaration
	double findValue(char* str); //same
	int isInt(double d);//same
%}

/* bison declarations */

%union {
  double DOB;
  char* STR;
}

%token <DOB>  NUM
%token <STR>  VAR
%token <STR>  FUNCTION
%token <STR>  STRING
%token  <DOB>  SM
%type  <DOB>  expression
%type  <DOB>  statement
%type  <STR>  assignment
%type <DOB> casestatement
%type <DOB> otherCases
%type <DOB> sw
%type <DOB> forLoop


%token IF ELSE PS PE AS LS GT EQ BS BE SWITCH CASE DEFAULT INC DEC FOR CM INT DOUBLE 
%nonassoc IFX
%nonassoc ELSE

%right POWER
%right AS
%left EQ
%left LS GT
%left PL MN
%left ML DV MOD
%left FACTORIAL

/* Grammar rules and actions follow.  */

%%

program: /* NULL */

	| program statement
	;

statement: SM

	| expression SM 			{ printf("value of expression: %lf\n", $1); }

	| INT VAR AS expression SM {
						//declaration of a variable with initialization
						if(findIndex($2)==-1)
						{
							strcpy(varName[indexOfVar],$2);
							varValue[indexOfVar]=$4;
							varType[indexOfVar]=1;
							indexOfVar++;
							printf("A new variable named: %s is declared and initialized with: %lf\n",$2,$4);
						}
						else
						{
							printf("Variable named: %s is already declared...try using different name\n",$2);
						}
	}

	| INT VAR SM {
						//declaration of a variable without initialization
						if(findIndex($2)==-1)
						{
							strcpy(varName[indexOfVar],$2);
							varValue[indexOfVar]=0;
							varType[indexOfVar]=1;
							indexOfVar++;
							printf("A new variable named: %s is declared\n",$2);
						}
						else
						{
							printf("Variable named: %s is already declared...try using different name\n",$2);
						}
	}

	| DOUBLE VAR AS expression SM {
						//declaration of a variable with initialization
						if(findIndex($2)==-1)
						{
							strcpy(varName[indexOfVar],$2);
							varValue[indexOfVar]=$4;
							varType[indexOfVar]=0;
							indexOfVar++;
							printf("A new variable named: %s is declared and initialized with: %lf\n",$2,$4);
						}
						else
						{
							printf("Variable named: %s is already declared...try using different name\n",$2);
						}
	}

	| DOUBLE VAR SM {
						//declaration of a variable without initialization
						if(findIndex($2)==-1)
						{
							strcpy(varName[indexOfVar],$2);
							varValue[indexOfVar]=0;
							varType[indexOfVar]=0;
							indexOfVar++;
							printf("A new variable named: %s is declared\n",$2);
						}
						else
						{
							printf("Variable named: %s is already declared...try using different name\n",$2);
						}
	}

    | assignment

	| IF PS expression PE statement %prec IFX {
								if($3)
								{
									printf("value of expression in IF: %lf\n",$5);
								}
								else
								{
									printf("condition is false in IF block\n");
								}
							}

	| IF PS expression PE statement ELSE statement {
								 	if($3)
									{
										printf("value of expression in IF: %lf\n",$5);
									}
									else
									{
										printf("value of expression in ELSE: %lf\n",$7);
									}
								   }

	| FUNCTION BS statement BE { 
									printf(" inside Function %s\n",$1); printf("Statement value: %lf\n",$3);  printf(" \n"); 
								}

	| casestatement

	| forLoop
	;

forLoop:  FOR PS assignment VAR LS expression SM VAR  PE BS expression SM BE { 
	      double i;
	      for (i=varValue[findIndex($3)] ; i<$6;i++)
				{
		  		       printf("\nexpression in for loop : %lf",$11); /*a increment kora hoeni tai still 0 print hoe...OK*/
			    }
		   }
	;	
assignment :    VAR AS expression SM 		{
					    $$ = $1;
    					int idx=findIndex($1);
    					if(idx==-1)
    					{
    						printf("Variable %s is not declared\n",$1);
    					}
    					else
    					{
    						varValue[idx] = $3; 
							printf("Variable name: %s and its assigned value: %lf\t\n",$1,$3);
    					}
					}
					;

expression: NUM				{ $$ = $1; /*printf("var->exp %lf\n",$$);*/ }

	| VAR				{ 	if(varType[findIndex($1)]==1)
							{
								isCurrentVarInt=1;
							}
							else
							{
								isCurrentVarInt=0;	
							}
							int idx=findIndex($1);
							if(idx!=-1)
							{
								$$ = findValue($1);
							}
							else
							{
								printf("Variable %s is not declared\n",$1);
							}
						}

	| expression PL expression	{ $$ = $1 + $3; }

	| expression MN expression	{ $$ = $1 - $3; }

	| expression ML expression	{ $$ = $1 * $3; }

	| expression DV expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3;
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	}
	| expression MOD expression	{	if($3) 
							  		{
							  			
							     		if(isInt($1)&&isInt($3)&&isCurrentVarInt==1)
							     		{
							     			int temp1=$1,temp2=$3;
							     			$$=temp1%temp2;
							     		}
							     		else
							     		{
							     			printf("Invalid datatype. Mod operation is only available for integers\n");
							     			$$=0;
							     		}
							  		}
							  		else
							  		{
										$$ = 0;
										printf("\ncannot mod with zero\t");
							  		} 	
				    	}
	 | expression FACTORIAL {
							int mult=1 ,i,n=$1;
							if(isInt($1)&&isCurrentVarInt==1)
							{
								for(i=$1;i>0;i--)
								{
									mult=mult*i;
								}
								$$=mult;
								printf("factorial value %d ! = %.10lf\n",n,$$); 
							}
							else
							{
								printf("Cannot find factorial for double value\n");
							}
						}	
					 
	| expression POWER expression { $$=pow($1,$3); printf("To the power value %.10lf\n",$$); }		

	| expression LS expression	{ $$ = $1 < $3; }

	| expression GT expression	{ $$ = $1 > $3; }

	| expression EQ expression  { $$ = $1 == $3; }

	| PS expression PE		{ $$ = $2;	}
	;	


casestatement :  DEFAULT statement	{    if(isDefault)
							 {
							 	printf("No case matched and executing default statement and its value : %lf\n",$2);
							 }
							 isDefault=1;
 				}
 				| otherCases
 				;

otherCases:   CASE expression statement { 
						 if($2==caseNo)
						 {
						 	printf("Case no %.0lf : value of statement: %lf\n",$2,$3);
						 	isDefault=0;
						 }
				    }					

				    | sw
 					;

					

sw:	  SWITCH PS expression PE	{
												printf("Switch case forwarded to case: %.0lf\n",$3);
											   	caseNo=$3;
										}
	  ; 						
%%

int isInt(double d)
{
    char str[16];
    sprintf(str, "%f",d);
    int ck=0,i;
    for(i=strlen(str)-1;i>=0;i--)
    {
        if(str[i]=='.')
        {
            return 1;
        }
        if(str[i]>'0'&&str[i]<='9')
        {
            return 0;
        }
    }
}


int findIndex(char* str)
{
    int i,j,z;
    for(i=0;i<100;i++)
    {
        int isFound=1;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]!=varName[i][j])
            {
                isFound=0;
                break;
            }
        }
        if(isFound==1&&strlen(str)==strlen(varName[i]))
        {
            return i;
        }
    }
    return -1; //if the variable is found to be undeclared
}

double findValue(char* str)
{
	int idx=findIndex(str);
	return varValue[idx];
}

int yywrap()
{
return 1;
}

int main(){
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	yyparse();
}

int yyerror(char *s){
	printf( "%s\n", s);
}

//hafiz031