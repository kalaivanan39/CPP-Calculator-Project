#include "Calc.h"

using namespace CppCalc;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Calc());
}


