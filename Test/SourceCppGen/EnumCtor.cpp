/***********************************************************************
Generated from ../Resources/Codegen/EnumCtor.txt
***********************************************************************/

#include "EnumCtor.h"

#define GLOBAL_SYMBOL ::vl_workflow_global::EnumCtor::
#define GLOBAL_NAME ::vl_workflow_global::EnumCtor::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::EnumCtor::Instance()

/***********************************************************************
Global Variables and Functions
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_EnumCtor)
	vl_workflow_global::EnumCtor instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_EnumCtor)

namespace vl_workflow_global
{
	::test::Seasons EnumCtor::Id(::test::Seasons s)
	{
		return s;
	}

	::vl::WString EnumCtor::main()
	{
		auto a = ::test::Seasons::Spring;
		auto b = ::test::Seasons::Summer;
		auto c = GLOBAL_NAME Id(::test::Seasons::Autumn);
		auto d = ::test::Seasons::Winter;
		return ((((((((((((::vl::__vwsn::ToString(static_cast<::vl::vuint64_t>(a)) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(static_cast<::vl::vuint64_t>(b))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(static_cast<::vl::vuint64_t>(c))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(static_cast<::vl::vuint64_t>(d))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(static_cast<::vl::vuint64_t>((a | b)))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(static_cast<::vl::vuint64_t>((a & ::test::Seasons::Good)))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(static_cast<::vl::vuint64_t>((a & ::test::Seasons::Bad))));
	}

	EnumCtor& EnumCtor::Instance()
	{
		return Getvl_workflow_global_EnumCtor().instance;
	}
}


#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ
