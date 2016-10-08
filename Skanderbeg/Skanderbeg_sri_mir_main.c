#include<Windows.h>
#include<stdio.h>



int main()
{
    
	//controllo debug prima del main 
	if (IsDebuggerPresent())
	{
		printf("madafaka");
		exit;
	}
	
	
	
	
	
	
	return 0;
}

