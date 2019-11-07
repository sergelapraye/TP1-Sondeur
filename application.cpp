//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop
#include <sstream>
#include <iostream.h>
#include <stdlib.h>
#include <vector>
#include <deque>

#include "application.h"
#include "RS232.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
    port.Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	char *buf =  port.Read();
	Latitude="";
	Longitude="";
	Temperature="";
    Profondeur="";
	UnicodeString str = "";

	for(int i = 0; i < 50; i++)
	{
		str += buf[i];
		if (buf[i]=='N' && buf[i-1]==',')
		{
		   Latitude+= buf[i-10];
		   Latitude+= buf[i-9];
		   Latitude+= buf[i-8];
		   Latitude+= buf[i-7];
		   Latitude+= buf[i-5];
		   Latitude+= buf[i-4];
		   Latitude+= buf[i-3];
		   Latitude+= buf[i-2];

		}
		if (buf[i]=='*' && buf[i-1]=='C' && buf[i-2]==',' )
		{
			Temperature+=buf[i-6];
			Temperature+=buf[i-5];
			Temperature+=buf[i-4];
			Temperature+=buf[i-3];
		}
		if (buf[i-9]=='S' && buf[i-8]=='D' && buf[i-7]=='D' && buf[i-6]=='P' && buf[i-5]=='T')
		{
			Profondeur+=buf[i-1];
		 	Profondeur+=buf[i];
		}
		if (buf[i]=='E' && buf[i-1]==',')
		{
		   Longitude+= buf[i-11];
		   Longitude+= buf[i-10];
		   Longitude+= buf[i-9];
		   Longitude+= buf[i-8];
		   Longitude+= buf[i-7];
		   Longitude+= buf[i-5];
		   Longitude+= buf[i-4];
		   Longitude+= buf[i-3];
		   Longitude+= buf[i-2];
		}
		Memo1->Lines->Add(str);
	}

	Memo1->Lines->Add(buf);
	Memo2->Lines->Add(Latitude);
	Memo3->Lines->Add(Longitude);
	Memo4->Lines->Add(Temperature);
    Memo5->Lines->Add(Profondeur);
}
//---------------------------------------------------------------------------
 void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
    port.Close();
}
//---------------------------------------------------------------------------

