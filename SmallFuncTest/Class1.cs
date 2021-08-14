using System;
using System.IO;
using System.Runtime.InteropServices;

namespace SmallFuncTest
{
    public class Class1
    {
        [DllExport]

        static public double FailTest(double num1, double num2)
        {
            //SmallCutDownLib p = new SmallCutDownLib();
              
            return num1 - num2;
                       
        }
        public static DateTime Today = DateTime.Now; // <- If this call isn't here, app works fine!
    }
}
