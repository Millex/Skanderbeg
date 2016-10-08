#include<Windows.h>
#include<stdio.h>



int main()
{
    //
	//controllo debug prima del main junk e no exit (forse "goto" spam?) chiamta dei controlli dbg con  goto annidato 
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


	HANDLE processo = INVALID_HANDLE_VALUE;
	BOOL controllo;

	processo = GetCurrentProcess();
	CheckRemoteDebuggerPresent(processo, &controllo);

	if (controllo)
	{
		printf("remoto");
		exit;
	}




	
	
	
	return 0;
}

