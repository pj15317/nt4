set foo=OPERATOR
del %logfile%
del %sumfile%
@echo START - %FOO% >>%masterlog%
@echo START - %FOO% >>%mastersum%

for %%i in (all and arithgoo comment definego equgood extrn if lengthgo) do call checknt0 %%i
for %%i in (listing macop macrogd2 macrogoo not not_and not_or not_xor) do call checknt0 %%i
for %%i in (nullprog or or_and or_xor periodty procgood radixgoo) do call checknt0 %%i
for %%i in (recordgo segment stgcmpgo strucgoo terminat vargood xor) do call checknt0 %%i
for %%i in (xor_and reptgood) do call checknt0 %%i

call chknt11 %logfile% %sumfile%
type %logfile% >>%masterlog%
type %sumfile% >>%mastersum%
@echo BUGBUG - %FOO% Doesn't test error output >>%masterlog%
@echo BUGBUG - %FOO% Doesn't test error output >>%mastersum%
@echo END - %FOO% >>%masterlog%
@echo END - %FOO% >>%mastersum%
set foo=
