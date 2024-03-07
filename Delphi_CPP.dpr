program Delphi_CPP;

uses
  Vcl.Forms,
  U_Principal in 'U_Principal.pas' {F_Principal},
  Bhaskara in 'Bhaskara.pas';

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TF_Principal, F_Principal);
  Application.Run;
end.
