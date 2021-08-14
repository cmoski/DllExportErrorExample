# DllExportErrorExample

I'm getting a weird netstandard error that it cannot load the assembly when using a DateTime in the sample class -- can't quite figure out where this error is coming from.

Any assistance would be amazing!

Thanks.

Steps to reproduce:

Create a NetStandard 2.1 DLL Library Project
Create a C++ Native App to utilize DLL
Call a C# Native function like DateTime
    public class Class1
    {
        [DllExport]

        static public double FailTest(double num1, double num2)
        {              
            return num1 - num2;              
        }
        public static DateTime Today = DateTime.Now; // <- If this variable init is commented out, the application works fine!
    }
Observe the error: Unhandled Exception: System.IO.FileNotFoundException: Could not load file or assembly 'netstandard, Version=2.1.0.0, Culture=neutral, PublicKeyToken=cc7b13ffcd2ddd51' or one of its dependencies. The system cannot find the file specified.

If the DateTime piece is commented out, app works fine. This is problematic for obvious reasons :P

DllExport -version: v1.7.4.29858+c1cc52f
Used Visual Studio / MSBuild / ...: Visual Studio 2019
