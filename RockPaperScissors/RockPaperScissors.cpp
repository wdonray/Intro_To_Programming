#include <iostream>
#include <time.h>
#include <Windows.h>
#include "Header.h"
#include "RockPaperScissors.h"

int main()
{
	Application * G = new RockPaperScissors();
	G->Start();
	G->Run();
	G->Shutdown();
	int num = Math::add(1, 7);
	Sleep(1000);
	return 0;
}
