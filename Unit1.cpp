//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Proc(const String &strFileName)
{
	try
	{
		TMemoryStream *mr = new TMemoryStream;
		TMemoryStream *mw = new TMemoryStream;
		try
		{
			mr->LoadFromFile(strFileName);
			mr->Position = 0;
			IdCompressorZLibEx1->DeflateStream(mr,mw,9);
		}
		__finally
		{
			delete mw;
			delete mr;
		}
	}
	catch(Exception  &e)
	{
		ShowMessage(e.Message);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if(OpenDialog1->Execute())
	{
		Proc(OpenDialog1->FileName);
	}
}
//---------------------------------------------------------------------------

