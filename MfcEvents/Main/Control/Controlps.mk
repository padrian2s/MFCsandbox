
Controlps.dll: dlldata.obj Control_p.obj Control_i.obj
	link /dll /out:Controlps.dll /def:Controlps.def /entry:DllMain dlldata.obj Control_p.obj Control_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del Controlps.dll
	@del Controlps.lib
	@del Controlps.exp
	@del dlldata.obj
	@del Control_p.obj
	@del Control_i.obj
