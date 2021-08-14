// LoadDLL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include "LibraryException.h"
#include "PeModule.h"
#include <tchar.h>

#include <iostream>
#include <windows.h> 
#include <stdio.h>

using namespace std;
using namespace examples::dllexport::basicExport;

int main()
{  
    PEModule lib(_T("SmallFuncTest.dll"));
    // If the handle is valid, try to get the function address.


        double result = lib.call<double, double, double>("FailTest", (double)5000.0, (double)6000.0);
        std::cout << result;

}

