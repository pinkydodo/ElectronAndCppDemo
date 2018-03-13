extern "C"
{
	typedef void (*CallBack)( int , const char* );
	double Add(double a, double b);

	void setCallback( CallBack callback );
}