
#pragma once


// PDFSink command target

class PDFSink : public CCmdTarget
{
	DECLARE_DYNAMIC(PDFSink)

public:
	PDFSink();
    void evtNotify();
	virtual ~PDFSink();

	virtual void OnFinalRelease();

protected:
	DECLARE_MESSAGE_MAP()
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};


