#include "Auto.h"
#include "io.h"

Auto::Auto()
{
	cout << "Auto default Constructor" << "\n";

}

Auto::Auto(int _Year, int _Price) : Vehicle(_Year, _Price)
{
	cout << "Auto Parameter Constructor" << "\n";
}