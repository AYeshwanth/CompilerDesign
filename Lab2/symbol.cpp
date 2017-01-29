#include <bits/stdc++.h>
using namespace std;

#define IDENTIFIER 258
#define NUMBER 259
#define SIZEOF 260

#define PTR 261
#define GT 262
#define LT 263
#define GE 264
#define LE 265
#define NE 266
#define EQ 267
#define AND 268
#define OR 269
#define DOT 270

#define TYPEDEF 271
#define INT 272
#define DOUBLE 273
#define VOID 274
#define STRUCT 275


#define RETURN 279
#define FOR 280

#define BREAK 284
#define CONTINUE 286

#define PRINTF 287
#define SCANF 288

#define L_CURLY 289
#define R_CURLY 290

#define L_SQ 299
#define R_SQ 300

#define ASSN 291
#define ADD 292
#define SUB 293
#define L_BRAC 294
#define R_BRAC 295
#define COMMA 296
#define SEMI_COLON 297

#define FUNCTION 333

#define STRING 298

#define IDENTIFIER_ARRAY 301

#define CONDITIONAL_OPERATOR 321

#define PREPROC 322

struct symbol_table_entry
{
	/* data */
	string name;
	vector<int> type;
	int addr;
};

map<string,symbol_table_entry> symbol_table;

int main()
{
	symbol_table.clear();
	freopen("../Lab2/tokens.txt","r",stdin);
	string line;
	int num=1;
	struct symbol_table_entry entry;
	int lastType=-1;
	while(getline(cin,line))
	{
		entry.type.clear();
		entry.type.push_back(stoi(line.substr(16,3)));
		entry.name=line.substr(28);
		if(entry.type[0] == PREPROC or entry.type[0] == INT or entry.type[0] == DOUBLE or entry.type[0] == PRINTF or entry.type[0] == IDENTIFIER_ARRAY or entry.type[0] == FUNCTION or entry.type[0] == CONDITIONAL_OPERATOR)
		{
			lastType=entry.type[0];
			cout<<entry.type[0]<<endl;
		}
		if(entry.type[0] == IDENTIFIER || entry.type[0] == IDENTIFIER_ARRAY || entry.type[0] == PRINTF || entry.type[0] == FUNCTION || entry.type[0] == CONDITIONAL_OPERATOR){
			if(symbol_table.find(entry.name) == symbol_table.end()){
				cout<<entry.type[0]<<endl;
				entry.type[0] = (lastType==-1)?IDENTIFIER:lastType;
				entry.addr=num++;
				symbol_table[entry.name] = entry;
			}
		}
		
	}
	map<string,symbol_table_entry>::iterator it;
	for(it=symbol_table.begin();it!=symbol_table.end();++it)
	{
		entry=it->second;
		cout<<entry.addr<<"  "<<entry.name<<"  "<<entry.type[0]<<endl;
	}
	
	return 0;
}
