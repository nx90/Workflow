/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/OrderedLambda.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "OrderedLambda.h"

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

#define GLOBAL_SYMBOL ::vl_workflow_global::OrderedLambda::
#define GLOBAL_NAME ::vl_workflow_global::OrderedLambda::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::OrderedLambda::Instance()

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_OrderedLambda)
	vl_workflow_global::OrderedLambda instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_OrderedLambda)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	::vl::vint OrderedLambda::Apply(const ::vl::Func<::vl::vint(::vl::vint)>& f, ::vl::vint arg)
	{
		return f(arg);
	}

	::vl::Func<::vl::vint(::vl::vint)> OrderedLambda::Adder(::vl::vint x)
	{
		return LAMBDA(::vl_workflow_global::__vwsno1_OrderedLambda_Adder_(x));
	}

	::vl::WString OrderedLambda::main()
	{
		auto f = GLOBAL_NAME Adder(static_cast<::vl::vint>(1));
		auto g = GLOBAL_NAME Adder(static_cast<::vl::vint>(2));
		return ((((((::vl::__vwsn::ToString(f(static_cast<::vl::vint>(1))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(f(static_cast<::vl::vint>(2)))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(g(static_cast<::vl::vint>(1)))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(g(static_cast<::vl::vint>(2))));
	}

	OrderedLambda& OrderedLambda::Instance()
	{
		return Getvl_workflow_global_OrderedLambda().instance;
	}

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsno1_OrderedLambda_Adder_::__vwsno1_OrderedLambda_Adder_(::vl::vint __vwsnctor_x)
		:x(__vwsnctor_x)
	{
	}

	::vl::vint __vwsno1_OrderedLambda_Adder_::operator()(::vl::vint __vwsno_1) const
	{
		return ((__vwsno_1 * static_cast<::vl::vint>(0)) + GLOBAL_NAME Apply(LAMBDA(::vl_workflow_global::__vwsno2_OrderedLambda_Adder_(__vwsno_1)), x));
	}

	//-------------------------------------------------------------------

	__vwsno2_OrderedLambda_Adder_::__vwsno2_OrderedLambda_Adder_(::vl::vint __vwsnctor___vwsno_1)
		:__vwsno_1(__vwsnctor___vwsno_1)
	{
	}

	::vl::vint __vwsno2_OrderedLambda_Adder_::operator()(::vl::vint __vwsno_2) const
	{
		return (__vwsno_1 + __vwsno_2);
	}
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
