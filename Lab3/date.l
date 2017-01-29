month31 january|march|may|july|august|october|december
month30 april|june|september|november
febmonth february
validDate31 01st|02nd|03rd|(0)[4-9]th|(1)[0-9]th|(2)(0th|1st|2nd|3rd|[4-9]th)|(3)(0th|1st)
validDate30 01st|02nd|03rd|(0)[4-9]th|(1)[0-9]th|(2)(0th|1st|2nd|3rd|[4-9]th)|(3)(0th)
validDate28 01st|02nd|03rd|(0)[4-9]th|(1)[0-9]th|(2)(0th|1st|2nd|3rd|[4-8]th)
validDate29 01st|02nd|03rd|(0)[4-9]th|(1)[0-9]th|(2)(0th|1st|2nd|3rd|[4-9]th)
year (1)(9)[5-9][0-9]|(2)(0)[0-1][0-7]
leapyear (1)(9)(1|3|5|7|9)(2|6)|(1)(9)(0|2|4|6|8)(0|4|8)|(2)(0)[0](0|4|8)|(2)(0)(1)(2|6)
validChar [a-zA-Z]
digit [0-9]
whiteSpace "\a"|"\\n"|"\\b"|"\t"|"\\t"|"\b"|"\\a"
%%
{validDate31}[" "]{month31}[" "]{year} printf("\n31 days, month : %s\n", yytext);
{validDate30}[" "]{month30}[" "]{year} printf("\n30 days, month : %s\n", yytext);
{validDate28}[" "]{febmonth}[" "]{year} printf("\n28 days, month : %s\n", yytext);
{validDate29}[" "]{febmonth}[" "]{leapyear} printf("\nLeap Year : %s\n", yytext);
.* printf("\nNothing to show  : %s\n", yytext);
%%
int main(){
	yylex();
	return 0;
}