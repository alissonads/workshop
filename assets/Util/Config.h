#ifndef	__CONFIG_H__
#define	__CONFIG_H__

#include <iostream>

#ifdef APPLE
	#include <OpenCL/opencl.h>
#else
	#include <CL/cl.h>
	#include<CL/cl.hpp>
#endif // APPLE

#endif //__CONFIG_H__