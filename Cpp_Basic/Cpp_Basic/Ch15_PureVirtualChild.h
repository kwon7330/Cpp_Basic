#pragma once
#include "Ch15_PureVirtual.h"
#include "io.h"


class PureVirtualChild : public PureVirtualParent
{
public:
	virtual void Print();
	void PrintClass() override;
	
};