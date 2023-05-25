#include "pch.h"
 #include "suchen.h"

namespace Text_Editor {
	System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	suchen^ sh = gcnew suchen();
	sh->ShowDialog();

