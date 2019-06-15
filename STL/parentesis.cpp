// Only got 96% of the cases right, so meh.
#include <iostream>
#include <string>
#include <stack> 

using namespace std;

int verifica(string frase, int *index);

int main()
{
	int i = 0;
	string a;
	cin >> a;
	verifica( a, &i) ? printf("Success") : printf("%d", i) ;
	return 0;
}

int verifica(string frase, int *index)
{
	stack<char> bb;
	int bandera = 0, i = 0, j = 0;
	if ( frase.size() == 0 )
		return 1;
	for ( i = 0; i < frase.size(); i++ )
	{
		if ( frase[i] == '(' || frase[i] == '{' || frase[i] == '[' ) 
		{
			bb.push( frase[i] );
			j = 1;
		}
		if ( frase[i] == ')' || frase[i] == '}' || frase[i] == ']'  )
		{
			j = 1;
			if ( bb.empty() )
			{
				*index = i + 1;
				return 0;
			}
			else
			{
				if ( ( bb.top() == '(' ) &&  frase[i] == ')' )
				{
					bb.pop();
					bandera = 1;
				}
				else
				{
					if ( ( bb.top() == '{' ) &&  frase[i] == '}' )
					{
						bb.pop();
						bandera = 1;
					}
					else
					{
						if ( ( bb.top() == '[' ) &&  frase[i] == ']' )
						{
							bb.pop();
							bandera = 1;
						}
						else
						{
							*index = i + 1;
							return 0;
						}
					}
				}
			} 
		}
	}
	if (  bandera == 1  &&  bb.empty() && j == 1) 
		return 1;
	else
	{
		if ( j == 0 )
			return 1;
		else
		{
			*index = i;
			return 0;
		}	
	}
}
