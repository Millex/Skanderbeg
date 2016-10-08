#include<Windows.h>
#include<stdio.h>



int main()
{
    //
	//controllo debug prima del main junk e no exit (forse "goto" spam?)
	//


	if (IsDebuggerPresent())
	{
		printf("madafaka");
		exit;
	}
    
	//
	//VEDERE SU IDA  
	//
	/*
	char trol = 0;
	__asm {
		mov eax, fs:[30h]
		mov al, [eax + 2h]
		mov trol, al
	}

	if (trol)
	{
		printf("swsss");
		exit;
	}
	*/





	CAZOO DURO
	
	
	
	return 0;
}

