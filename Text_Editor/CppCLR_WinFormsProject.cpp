#include "pch.h"
#include "editor.h"


using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }


using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLR_WinFormsProjekt::editor());
  return 0;
}