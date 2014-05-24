// testConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	tesseract::TessBaseAPI api;
	int y = api.Init("../../tessdata", "eng", tesseract::OEM_DEFAULT);
	return 0;
}

