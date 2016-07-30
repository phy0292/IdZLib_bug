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
  object Label1: TLabel
    Left = 184
    Top = 72
    Width = 269
    Height = 13
    Caption = 'Please select "comp.dat" or "ExtWizrd.dll" file for testing'
  end
  object Button1: TButton
    Left = 280
    Top = 168
    Width = 75
    Height = 25
    Caption = 'test'
    TabOrder = 0
    OnClick = Button1Click
  end
  object OpenDialog1: TOpenDialog
    Left = 16
    Top = 8
  end
  object IdCompressorZLibEx1: TIdCompressorZLibEx
    Left = 16
    Top = 40
  end
end
