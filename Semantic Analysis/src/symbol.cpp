#include <bits/stdc++.h>
using namespace std;

bool DeclarationCheck = false;

vector<string> identifierList;

struct symbolTable
{
	/* data */
	string name;
	vector<int> type;
	int addr;
};


map<string,symbolTable> st;

stack<map<string, symbolTable> > symbolTableStack;

map<string, symbolTable> currentScopeSymbolTable;

bool lookup(string name)
{
	if(!currentScopeSymbolTable.count(name))
		return true;
	else
		return false;
}

void insert(char *n, int type, int addr)
{

	struct symbolTable INT_VALUE;
	INT_VALUE.name = "INT";
	INT_VALUE.type.push_back(266);
	INT_VALUE.addr = 1;

	struct symbolTable DOUBLE_VALUE;
	DOUBLE_VALUE.name = "DOUBLE";
	DOUBLE_VALUE.type.push_back(267);
	DOUBLE_VALUE.addr = 1;

	st[INT_VALUE.name] = INT_VALUE;
	st[DOUBLE_VALUE.name] = DOUBLE_VALUE;


	if(symbolTableStack.empty()){
		symbolTableStack.push(currentScopeSymbolTable);
	}
	currentScopeSymbolTable = symbolTableStack.top();
	symbolTableStack.pop();

	string name(n);
	struct symbolTable sym;
	if(lookup(name))
	{
		
		sym.name = name;
		sym.type.push_back(type);
		sym.addr = addr;
		st[name] = sym;
		currentScopeSymbolTable[name] = sym;
	}
	else
	{
		sym = st[name];
		if(sym.addr == addr)
		{
			sym.type.push_back(type);
			st[name] = sym;
			currentScopeSymbolTable[name] = sym;
		}
	}
	symbolTableStack.push(currentScopeSymbolTable);
	return;
}

int insertWithError(int type, int addr){

	if(symbolTableStack.empty()){
		symbolTableStack.push(currentScopeSymbolTable);
	}
	currentScopeSymbolTable = symbolTableStack.top();
	symbolTableStack.pop();
	for(int i=0; i<identifierList.size(); i++){
		string temp = identifierList[i];
		if(st.count(temp) == 0){
			struct symbolTable sym;
			sym.name = temp;
			sym.type.push_back(type);
			sym.addr = addr;
			st[temp] = sym;
			currentScopeSymbolTable[temp] = sym;
		}
	}
	symbolTableStack.push(currentScopeSymbolTable);
	return 1;
}

bool IsAlreadyPresent(string token){
	if(symbolTableStack.top().count(token) == 0){
		return false;
	}
	return true;
}

void printsym()
{
	//cout<<"hello"<<endl;
	map<string,symbolTable>::iterator it;
	struct symbolTable s;
	for(it=st.begin();it!=st.end();++it)
	{
		s=it->second;
		cout<<s.addr<<"  "<<s.name<<"  ";
		for(int i=0;i<s.type.size();++i)
			cout<<s.type[i]<<" ";
		cout<<endl;
	}
	return;
}

bool check(string s1, string s2){
	struct symbolTable symbolTable1, symbolTable2;
	symbolTable1 = st[s1];
	symbolTable2 = st[s2];
	for(int i=0; i<symbolTable1.type.size(); i++){
		for(int j=0; j<symbolTable2.type.size(); j++){
			if(symbolTable1.type[i] == symbolTable2.type[j])
				return true;
		}
	}
	return false;
}

bool IDPresent(string token){
	//cout<<token<<endl;
	struct symbolTable symTabEntry;
	if(st.count(token) == 0){
		return false;
	}
	return true;
}

void saveST(){
	if(symbolTableStack.empty())
		symbolTableStack.push(currentScopeSymbolTable);
}

void popST(){
	if(symbolTableStack.empty() == false)
		symbolTableStack.pop();
}