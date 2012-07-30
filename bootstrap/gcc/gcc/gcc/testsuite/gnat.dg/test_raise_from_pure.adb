--  { dg-do run }
--  { dg-options "-O2" }
with Raise_From_Pure; use Raise_From_Pure;
procedure test_raise_from_pure is
   K : Integer;
begin
   K := Raise_CE_If_0 (0);
end;
