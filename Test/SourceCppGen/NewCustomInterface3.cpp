/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/NewCustomInterface3.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "NewCustomInterface3.h"
/* CodePack:BeginIgnore() */
#ifndef VCZH_DEBUG_NO_REFLECTION
/* CodePack:ConditionOff(VCZH_DEBUG_NO_REFLECTION, NewCustomInterface3Reflection.h) */
#include "NewCustomInterface3Reflection.h"
#endif
/* CodePack:EndIgnore() */

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::NewCustomInterface3::
#define GLOBAL_NAME ::vl_workflow_global::NewCustomInterface3::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::NewCustomInterface3::Instance()

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_NewCustomInterface3)
	vl_workflow_global::NewCustomInterface3 instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_NewCustomInterface3)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	::vl::WString NewCustomInterface3::main()
	{
		auto x = ::vl::Ptr<::MyClass>(new ::MyClass(static_cast<::vl::vint>(1), static_cast<::vl::vint>(5)));
		auto xs = ::vl::__vwsn::This(x.Obj())->CreateMyInterface();
		return ((((((::vl::WString(L"[", false) + ::vl::__vwsn::ToString(::vl::__vwsn::This(xs.Obj())->Get100())) + ::vl::WString(L"][", false)) + ::vl::__vwsn::ToString(::test::CustomInterfaceProcessor::Sum(::vl::Ptr<::vl::reflection::description::IValueEnumerable>(xs)))) + ::vl::WString(L"][", false)) + ::vl::__vwsn::ToString(::test::CustomInterfaceProcessor::Sum(::vl::Ptr<::vl::reflection::description::IValueEnumerable>(xs)))) + ::vl::WString(L"]", false));
	}

	NewCustomInterface3& NewCustomInterface3::Instance()
	{
		return Getvl_workflow_global_NewCustomInterface3().instance;
	}

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsnc1_NewCustomInterface3_MyClass_CreateMyInterface__IMyInterface3::__vwsnc1_NewCustomInterface3_MyClass_CreateMyInterface__IMyInterface3(::MyClass* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	::vl::Ptr<::vl::reflection::description::IValueEnumerator> __vwsnc1_NewCustomInterface3_MyClass_CreateMyInterface__IMyInterface3::CreateEnumerator()
	{
		return ::vl::Ptr<::vl::reflection::description::IValueEnumerator>(new ::vl_workflow_global::__vwsnc2_NewCustomInterface3_MyClass_CreateMyInterface_CreateEnumerator__vl_reflection_description_IValueEnumerator(this, __vwsnthis_0));
	}

	::vl::vint __vwsnc1_NewCustomInterface3_MyClass_CreateMyInterface__IMyInterface3::Get100()
	{
		return (::MyClass::Get50() * static_cast<::vl::vint>(2));
	}

	//-------------------------------------------------------------------

	__vwsnc2_NewCustomInterface3_MyClass_CreateMyInterface_CreateEnumerator__vl_reflection_description_IValueEnumerator::__vwsnc2_NewCustomInterface3_MyClass_CreateMyInterface_CreateEnumerator__vl_reflection_description_IValueEnumerator(::IMyInterface3* __vwsnctorthis_0, ::MyClass* __vwsnctorthis_1)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
		, __vwsnthis_1(::vl::__vwsn::This(__vwsnctorthis_1))
	{
		this->index = (- static_cast<::vl::vint>(1));
	}

	::vl::reflection::description::Value __vwsnc2_NewCustomInterface3_MyClass_CreateMyInterface_CreateEnumerator__vl_reflection_description_IValueEnumerator::GetCurrent()
	{
		return ::vl::__vwsn::Box((__vwsnthis_1->begin + index));
	}

	::vl::vint __vwsnc2_NewCustomInterface3_MyClass_CreateMyInterface_CreateEnumerator__vl_reflection_description_IValueEnumerator::GetIndex()
	{
		return index;
	}

	bool __vwsnc2_NewCustomInterface3_MyClass_CreateMyInterface_CreateEnumerator__vl_reflection_description_IValueEnumerator::Next()
	{
		if ((index == (__vwsnthis_1->end - __vwsnthis_1->begin)))
		{
			return false;
		}
		else
		{
			(index = (index + static_cast<::vl::vint>(1)));
			return true;
		}
	}

}

/***********************************************************************
Class (::IMyInterface3)
***********************************************************************/

/***********************************************************************
Class (::MyClass)
***********************************************************************/

MyClass::MyClass(::vl::vint _begin, ::vl::vint _end)
	: begin((- static_cast<::vl::vint>(1)))
	, end((- static_cast<::vl::vint>(1)))
{
	(this->begin = _begin);
	(this->end = _end);
}

::vl::vint MyClass::Get50()
{
	return static_cast<::vl::vint>(50);
}

::vl::Ptr<::IMyInterface3> MyClass::CreateMyInterface()
{
	return ::vl::Ptr<::IMyInterface3>(new ::vl_workflow_global::__vwsnc1_NewCustomInterface3_MyClass_CreateMyInterface__IMyInterface3(this));
}

#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
