#include "MyForm.h"
#include "gradeXI.h"
#include "gradeXII.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
/*
ref class ManagedGlobals {
public:
	extern ScienceFriction::gradeXII^ gxii = gcnew gradeXII();
	extern ScienceFriction::gradeXI^ gxi = gcnew gradeXI();
};
*/
[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ScienceFriction::MyForm mainForm;
	// ScienceFriction::gradeXII Form;
	 //ScienceFriction::gradeXI Form;

	Application::Run(% mainForm);

	return 0;
}