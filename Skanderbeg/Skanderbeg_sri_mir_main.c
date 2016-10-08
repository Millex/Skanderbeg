#include<Windows.h>
#include<stdio.h>



int main()
{
    //
	//controllo debug prima del main junk e no exit (forse "goto" spam?) chiamta dei controlli dbg con  goto annidato !!!!! non fare un unica funzione
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

	



	BOOL controllo1 = FALSE;
	HANDLE finestra = NULL;
	wchar_t *WindowClassNameIDA = L"Qt5QWindowIcon";	// IDA Pro funziona anche per x32/54dbg
	wchar_t *WindowClassNameOlly = L"OLLYDBG";			// OllyDbg
	wchar_t *WindowClassNameImmunity = L"ID";			// Immunity Debugger
 
														
														//controllo IDA xdbg32/64
	finestra = FindWindow(WindowClassNameIDA, 0);
	if (finestra)
	{
		controllo1 = TRUE;
	}

	// fcontrollo  OllyDBG
	finestra = FindWindow(WindowClassNameOlly, 0);
	if (finestra)
	{
		controllo1 = TRUE;
	}

	// controllo  Immunity
	finestra = FindWindow(WindowClassNameImmunity, 0);
	if (finestra)
	{
		controllo1 = TRUE;
	}

	if (controllo1)
	{
		printf("lololol");
		exit;
	}



	
	
	
	return 0;
}

