// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

// C_clsPDFCreator wrapper class

class C_clsPDFCreator : public COleDispatchDriver
{
public:
	C_clsPDFCreator(){} // Calls COleDispatchDriver default constructor
	C_clsPDFCreator(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	C_clsPDFCreator(const C_clsPDFCreator& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// __clsPDFCreator methods
public:
	void eReady()
	{
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void eError()
	{
		InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// __clsPDFCreator properties
public:

};
