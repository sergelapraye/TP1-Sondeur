object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 300
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Latitude: TLabel
    Left = 64
    Top = 157
    Width = 36
    Height = 13
    Caption = 'latitude'
  end
  object Longitude: TLabel
    Left = 224
    Top = 157
    Width = 44
    Height = 13
    Caption = 'longitude'
  end
  object Temperature: TLabel
    Left = 368
    Top = 157
    Width = 60
    Height = 13
    Caption = 'temperature'
  end
  object Profondeur: TLabel
    Left = 520
    Top = 157
    Width = 54
    Height = 13
    Caption = 'profondeur'
  end
  object Memo1: TMemo
    Left = 24
    Top = 8
    Width = 593
    Height = 137
    Color = clBtnHighlight
    TabOrder = 0
  end
  object Memo2: TMemo
    Left = 24
    Top = 176
    Width = 137
    Height = 116
    TabOrder = 1
  end
  object Memo3: TMemo
    Left = 176
    Top = 176
    Width = 137
    Height = 116
    TabOrder = 2
  end
  object Memo4: TMemo
    Left = 328
    Top = 176
    Width = 137
    Height = 116
    Lines.Strings = (
      '')
    TabOrder = 3
  end
  object Memo5: TMemo
    Left = 480
    Top = 176
    Width = 137
    Height = 116
    TabOrder = 4
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 560
    Top = 56
  end
end
