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

#define IF 276
#define ELSE 277
#define WHILE 278
#define RETURN 279
#define FOR 280
#define DO 281
#define SWITCH 282
#define CASE 283
#define BREAK 284
#define DEFAULT 285
#define CONTINUE 286

#define PRINTF 287
#define SCANF 288

#define L_CURLY 289
#define R_CURLY 290

#define ASSN 291
#define ADD 292
#define SUB 293
#define L_BRAC 294
#define R_BRAC 295
#define COMMA 296
#define SEMI_COLON 297

#define FUNCTION 333

#define L_SQ 299
#define R_SQ 300
#define IDENTIFIER_ARRAY 301

#define STRING 298

struct symbolTable
{
	/* data */
	string name;
	vector<int> type;
	int addr;
};
map<string,symbolTable> st;
void insert(struct symbolTable s)
{
	/* data */
	st[s.name]=s;
}

bool lookup(string name)
{
	if(st.find(name)!=st.end())
		return true;
	else
		return false;
}
int main()
{
	st.clear();
	freopen("../Lab2/tokens.txt","r",stdin);
	string line;
	int num=1;
	struct symbolTable s;
	int lastType=-1;
	while(getline(cin,line))
	{
		s.type.clear();
		s.type.push_back(stoi(line.substr(16,3)));
		s.name=line.substr(28);
		if(s.type[0] == INT or s.type[0] == DOUBLE or s.type[0] == PRINTF or s.type[0] == IDENTIFIER_ARRAY or s.type[0] == FUNCTION)
		{
			lastType=s.type[0];
		}
		if(s.type[0] == IDENTIFIER || s.type[0] == IDENTIFIER_ARRAY || s.type[0] == PRINTF || s.type[0] == FUNCTION){
			if(!lookup(s.name)){
				s.type[0] = (lastType==-1)?IDENTIFIER:lastType;
				s.addr=num++;
				insert(s);
			}
		}
		
	}
	map<string,symbolTable>::iterator it;
	for(it=st.begin();it!=st.end();++it)
	{
		s=it->second;
		cout<<s.addr<<"  "<<s.name<<"  "<<s.type[0]<<endl;
	}
	
	
}
