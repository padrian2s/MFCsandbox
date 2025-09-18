
ATLSinkps.dll: dlldata.obj ATLSink_p.obj ATLSink_i.obj
	link /dll /out:ATLSinkps.dll /def:ATLSinkps.def /entry:DllMain dlldata.obj ATLSink_p.obj ATLSink_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del ATLSinkps.dll
	@del ATLSinkps.lib
	@del ATLSinkps.exp
	@del dlldata.obj
	@del ATLSink_p.obj
	@del ATLSink_i.obj
