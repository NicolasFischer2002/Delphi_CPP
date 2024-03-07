unit Bhaskara;

interface

type
  TBhaskara = class
  private
    FCoefA, FCoefB, FCoefC: Double;
  public
    constructor Create(a, b, c: Double);
  end;

implementation

constructor TBhaskara.Create(a, b, c: Double);
begin
     // Representam os coefici�ntes da equa��o
     FCoefA := a;
     FCoefB := b;
     FCoefC := c;
end;

end.
