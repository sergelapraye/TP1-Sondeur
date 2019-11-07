//---------------------------------------------------------------------------

#ifndef applicationH
#define applicationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <vector>
#include "RS232.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TMemo *Memo2;
	TMemo *Memo3;
	TMemo *Memo4;
	TMemo *Memo5;
	TLabel *latitude;
	TLabel *longitude;
	TLabel *temperature;
	TLabel *profondeur;
	TTimer *Timer1;
	TMemo *Memo1;
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// Déclarations utilisateur
	RS232 port;
//OVERLAPPED over;
	std::vector<char> received;
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
	UnicodeString Latitude ;
	UnicodeString Longitude ;
	UnicodeString Temperature;
	UnicodeString Profondeur;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
