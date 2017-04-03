/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMO
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMO

#include "DemoPartialClasses.h"

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			DECL_TYPE_INFO(::demo::IStringAsync)
			DECL_TYPE_INFO(::demo::IViewModel)
			DECL_TYPE_INFO(::demo::MainWindow)
			DECL_TYPE_INFO(::demo::MainWindowConstructor)

			BEGIN_INTERFACE_PROXY_SHAREDPTR(::demo::IStringAsync, ::vl::reflection::description::IAsync)
			END_INTERFACE_PROXY(::demo::IStringAsync)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(::demo::IViewModel)
				void BeginDownload(const ::vl::Func<void(::vl::vint32_t)>& progress, const ::vl::Func<void(const ::vl::WString&)>& callback) override
				{
					INVOKE_INTERFACE_PROXY(BeginDownload, progress, callback);
				}
			END_INTERFACE_PROXY(::demo::IViewModel)
#endif

			extern bool LoadDemoTypes();
		}
	}
}

#endif
