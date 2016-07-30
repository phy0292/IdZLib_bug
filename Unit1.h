//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <IdCompressorZLibEx.hpp>
#include <IdZLibCompressorBase.hpp>
#include <IdBaseComponent.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TOpenDialog *OpenDialog1;
	TIdCompressorZLibEx *IdCompressorZLibEx1;
	TLabel *Label1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
	void __fastcall Proc(const String &strFileName);
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
