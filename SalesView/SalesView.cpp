// Never forget thad IDisDream -> true
// Put on Menu Tolls  -> Ver ToolBox:V 
// Dont forget put on [STAThreadAttribute] before Main

#include "pch.h"
#include "SalesMainForm.h"

using namespace System;                             // For String
using namespace System::Collections::Generic;       // For List
using namespace SalesModel;                         // Classes and Methods
using namespace SalesController;                    // Controllers
using namespace System::Windows::Forms;              // For Forms


// Main


[STAThreadAttribute]
int Main(array<System::String ^> ^args)              // Only copy
{


    // Run Form 
    Application::EnableVisualStyles();                          // Styles
    Application::SetCompatibleTextRenderingDefault(false);      // Compatible   
    
    // ProjectView :: FormView from;
    SalesView::SalesMainForm form;
    Application::Run(% form);
    return 0;
}
