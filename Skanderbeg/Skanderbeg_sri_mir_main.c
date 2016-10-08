#include<Windows.h>
#include<stdio.h>



int main()
{
    
	//controllo debug prima del main 
	if (IsDebuggerPresent())
	{
		printf("madafaka\n");
		exit;
	} else {
		printf("...\n")
	}
	
	
	
	
	
	
	return 0;
}

